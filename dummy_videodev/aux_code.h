
#ifndef AUX_CODE_

/*
 * helpers
 */
#define STRINGIFY(s) #s
#define STRINGIFY2(s) STRINGIFY(s)

#define dprintk(fmt, args...)                                                  \
	do {                                                                   \
		if (debug > 0) {                                               \
			printk(KERN_INFO "v4l2-loopback[" STRINGIFY2(          \
				       __LINE__) "]: " fmt,                    \
			       ##args);                                        \
		}                                                              \
	} while (0)

#define MARK()                                                                 \
	do {                                                                   \
		if (debug > 1) {                                               \
			printk(KERN_INFO "%s:%d[%s]\n", __FILE__, __LINE__,    \
			       __func__);                                      \
		}                                                              \
	} while (0)

#define dprintkrw(fmt, args...)                                                \
	do {                                                                   \
		if (debug > 2) {                                               \
			printk(KERN_INFO "v4l2-loopback[" STRINGIFY2(          \
				       __LINE__) "]: " fmt,                    \
			       ##args);                                        \
		}                                                              \
	} while (0)

#endif //AUX_CODE_