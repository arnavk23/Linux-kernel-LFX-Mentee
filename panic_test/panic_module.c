#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Arnav Kapoor");
MODULE_DESCRIPTION("A module to panic the kernel for testing purposes");
MODULE_VERSION("0.1");

static int __init panic_init(void)
{
    pr_emerg("Triggering kernel panic for testing...\n");
    panic("Kernel panic triggered by test module!\n");
    return 0;
}

static void __exit panic_exit(void)
{
    pr_info("Panic module unloaded (shouldn't get here).\n");
}

module_init(panic_init);
module_exit(panic_exit);
