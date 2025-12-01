// SPDX-License-Identifier: GPL-2.0 OR MIT
// inode_ts_stress.c
// Lightweight userspace stress test for inode timestamp getters/setters.
// Spawns multiple writer and reader threads that repeatedly update and stat
// the same file to exercise inode timestamp accessors from userspace.

#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <sys/types.h>
#include <string.h>
#include <errno.h>
#include <time.h>

static volatile int stop;
static const char *path = "./inode_ts_stress.tmp";
static int writers = 4;
static int readers = 4;
static int duration = 30; // seconds

static void *writer_thread(void *arg)
{
    (void)arg;
    struct timespec ts[2];
    while (!stop) {
        clock_gettime(CLOCK_REALTIME, &ts[0]);
        ts[1] = ts[0];
        if (utimensat(AT_FDCWD, path, ts, 0) != 0) {
            perror("utimensat");
            // continue - we still want to stress
        }
        // a tiny pause
        usleep(100);
    }
    return NULL;
}

static void *reader_thread(void *arg)
{
    (void)arg;
    struct stat st;
    while (!stop) {
        if (stat(path, &st) != 0) {
            if (errno != ENOENT)
                perror("stat");
        }
        usleep(100);
    }
    return NULL;
}

static void usage(const char *prog)
{
    fprintf(stderr, "Usage: %s [-t seconds] [-w writers] [-r readers] [path]\n", prog);
}

int main(int argc, char **argv)
{
    int opt;
    while ((opt = getopt(argc, argv, "t:w:r:")) != -1) {
        switch (opt) {
        case 't': duration = atoi(optarg); break;
        case 'w': writers = atoi(optarg); break;
        case 'r': readers = atoi(optarg); break;
        default: usage(argv[0]); return 1;
        }
    }
    if (optind < argc)
        path = argv[optind];

    // create the file if missing
    int fd = open(path, O_CREAT | O_RDWR, 0644);
    if (fd < 0) {
        perror("open");
        return 1;
    }
    close(fd);

    pthread_t *wt = malloc(sizeof(pthread_t) * writers);
    pthread_t *rt = malloc(sizeof(pthread_t) * readers);
    if (!wt || !rt) {
        fprintf(stderr, "OOM\n");
        return 1;
    }

    printf("inode_ts_stress: path=%s duration=%ds writers=%d readers=%d\n",
           path, duration, writers, readers);

    for (int i = 0; i < writers; i++)
        pthread_create(&wt[i], NULL, writer_thread, NULL);
    for (int i = 0; i < readers; i++)
        pthread_create(&rt[i], NULL, reader_thread, NULL);

    sleep(duration);
    stop = 1;

    for (int i = 0; i < writers; i++)
        pthread_join(wt[i], NULL);
    for (int i = 0; i < readers; i++)
        pthread_join(rt[i], NULL);

    free(wt);
    free(rt);

    printf("done\n");
    return 0;
}
