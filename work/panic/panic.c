// SPDX-License-Identifier: GPL-2.0
/*
 * Created by Haotian Xu on 5/13/23.
 */

#include <linux/module.h>
#include <linux/kernel.h>

static int __init panic_init(void)
{
	panic("Forcing a kernel panic");
	return 0;
}

module_init(panic_init);

MODULE_LICENSE("GPL");
