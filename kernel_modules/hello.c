#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Arnav Kapoor");
MODULE_DESCRIPTION("A simple Hello World Kernel Module");

static int __init hello_init(void) {
    pr_info("Hello World: Kernel module loaded.\n");
    return 0;
}

static void __exit hello_exit(void) {
    pr_info("Goodbye World: Kernel module unloaded.\n");
}

module_init(hello_init);
module_exit(hello_exit);
