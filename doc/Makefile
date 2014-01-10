CC		= gcc -std=gnu99
INSTALL		= /usr/bin/install -c
INSTALL_BIN	= ${INSTALL}
INSTALL_DATA	= ${INSTALL} -m 644
INSTALL_SUID	= ${INSTALL} -o root -m 4755
RM		= @RM@
LEX		= flex
LEXLIB		= -lfl
CFLAGS		= @IRC_CFLAGS@ -DIRCD_PREFIX=\"/home/j4jackj/ircd\"
LDFLAGS		= 
MKDEP		= ${CC} -MM
MV		= /bin/mv
RM		= /bin/rm
CP		= /bin/cp
TOUCH		= @TOUCH@

prefix		= /home/j4jackj/ircd
datarootdir	= ${prefix}/share
exec_prefix	= ${prefix}
exec_suffix	= @exec_suffix@
bindir		= ${exec_prefix}/bin
libexecdir	= ${prefix}/libexec/sporksircd
confdir		= /home/j4jackj/ircd/etc
localstatedir	= ${prefix}/var
# Change this later! -- adrian
moduledir	= /home/j4jackj/ircd/modules
automoduledir	= /home/j4jackj/ircd/modules/autoload

CONFS		= example.conf reference.conf

SSL_LIBS	=  -lcrypto -ldl
SSL_INCLUDES	= 

IRCDLIBS	=  $(SSL_LIBS)

INCLUDES	= -I../include $(SSL_INCLUDES)
CPPFLAGS	= ${INCLUDES} 

all: build
 
install-mkdirs:
	-@if test ! -d $(DESTDIR)$(confdir); then \
		echo "mkdir -p $(confdir)"; \
		mkdir -p $(DESTDIR)$(confdir); \
	fi

	-@if test ! -d $(DESTDIR)$(mandir); then \
		echo "mkdir -p $(mandir)"; \
		mkdir -p $(DESTDIR)$(mandir); \
	fi

install: install-mkdirs build
	@echo "ircd: installing example config files ($(CONFS))"
	@for i in $(CONFS); do \
		if test -f $(DESTDIR)$(confdir)/$$i; then \
			$(MV) $(DESTDIR)$(confdir)/$$i $(DESTDIR)$(confdir)/$$i.old; \
		fi; \
		$(INSTALL_DATA) $$i $(DESTDIR)$(confdir); \
	done

	-@if test ! -f $(DESTDIR)$(confdir)/ircd.motd; then \
		echo "ircd: installing motd file (ircd.motd)"; \
		$(INSTALL_DATA) ircd.motd $(DESTDIR)$(confdir); \
	fi

	-@if test -f $(DESTDIR)$(confdir)/links.txt; then \
		$(RM) $(DESTDIR)$(confdir)/links.txt; \
	fi

	@echo "ircd: installing manpage"
	@for i in $(MANPAGES); do \
		if test ! -f $(DESTDIR)$(mandir)/$$i; then \
			$(INSTALL_DATA) $$i $(DESTDIR)$(mandir); \
		fi; \
	done

build:

clean:

depend:

lint:

distclean:
	${RM} -f Makefile
