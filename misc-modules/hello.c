/*                                                     
 * $Id: hello.c,v 1.5 2004/10/26 03:32:21 corbet Exp $ 
 */                                                    
#include <linux/init.h>
#include <linux/module.h>
MODULE_LICENSE("Dual BSD/GPL");

static int hello_init(void)
{
	printk(KERN_ALERT "Hello, widi9545\n");
	return 0;
}

static void hello_exit(void)
{
	printk(KERN_ALERT "Goodbye, widi9545\n");
}

module_init(hello_init);
module_exit(hello_exit);
