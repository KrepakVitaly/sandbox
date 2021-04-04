ifeq ($(KERNELRELEASE),)

    # Assume the source tree is where the running kernel was built
    # You should set KERNELDIR in the environment if it's elsewhere
    KERNELDIR ?= /lib/modules/$(shell uname -r)/build
    # The current directory is passed to sub-makes as argument
    PWD := $(shell pwd)

modules:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules
	rm -rf ./.tmp*

modules_install:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules_install
	rm -rf ./.tmp*

clean:
	@echo "Clean..."
	rm -rf ./.tmp*
	rm -rf *.o *~ core .depend .*.cmd *.ko *.mod.c .tmp_versions *.mod modules.order *.symvers
	rm *.o.rc

.PHONY: modules modules_install clean

else
    # called from kernel build system: just declare what our modules are
    obj-m +=  dummy_videodev.o
endif
