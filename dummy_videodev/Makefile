KERNELRELEASE	?= `uname -r`
KERNEL_DIR	?= /lib/modules/$(KERNELRELEASE)/build
PWD		:= $(shell pwd)
obj-m		:= dummy_videodev.o



PREFIX ?= /usr/local
BINDIR  = $(PREFIX)/bin
MANDIR  = $(PREFIX)/share/man
MAN1DIR = $(MANDIR)/man1
INSTALL = install
INSTALL_PROGRAM = $(INSTALL) -p -m 755
INSTALL_DIR     = $(INSTALL) -p -m 755 -d
INSTALL_DATA    = $(INSTALL) -m 644
MODULE_OPTIONS = devices=1


all:
	@echo "Building dummy_videodev v4l2 device driver..."
	$(MAKE) -C $(KERNEL_DIR) M=$(PWD) modules
	rm -rf ./.tmp*

clean:
	@echo "Clean..."

