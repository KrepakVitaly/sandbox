KERNELRELEASE	?= 4.15.0-140-generic
KERNEL_DIR	?= /lib/modules/$(KERNELRELEASE)/build
PWD		:= $(shell pwd)
obj-m		:= v4l2-pci-skeleton.o

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
	@echo "Building v4l2 device driver..."
	$(MAKE) -C $(KERNEL_DIR) M=$(PWD) modules
	rm -rf ./.tmp*

clean:
	@echo "Clean..."
