/*
 * This is a dummy V4L2 Skeleton Driver. It gives an initial skeleton source
 * for use.
 *
 * This skeleton driver assumes that ...
 *
 */
#include <linux/init.h>
#include <linux/module.h>
#include <media/v4l2-device.h>

#include "dummy_videodev.h"
#include "aux_code.h"

MODULE_DESCRIPTION("V4L2 dummy video device");
MODULE_AUTHOR("Vitaliy Krepak <krepakvitaliy@gmail.com>");
MODULE_LICENSE("Dual BSD/GPL");

struct dummy_videodev {
	struct v4l2_device v4l2_dev;
};

static int debug = 1;

static int __init dummy_videodev_init_module(void)
{
    dprintk("creating v4l2 dummy device\n");
	return 0;
}

static void dummy_videodev_exit_module(void)
{
    dprintk("cleaning v4l2 dummy device\n");
    return;
}

module_init(dummy_videodev_init_module);
module_exit(dummy_videodev_exit_module);
