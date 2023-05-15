// SPDX-License-Identifier: GPL-2.0
/*
 * Created by Haotian Xu on 5/13/23.
 */

#include <linux/module.h>
#include <linux/kernel.h>

static char *my_name = "";
module_param(my_name, charp, 0444);
MODULE_PARM_DESC(my_name, "Your name");

static int __init hello_init(void)
{
	if (!strcmp(my_name, ""))
		pr_info("Hello world!\n");
	else
		pr_info("Hello world! My name is %s\n", my_name);
	return 0;
}

static void __exit hello_exit(void)
{
	pr_info("Goodbye world!\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
