/* include/setup.h.  Generated from setup.h.in by configure.  */
/* include/setup.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Size of the auth heap. */
#define AUTH_HEAP_SIZE 128

/* Size of away heap. */
#define AWAY_HEAP_SIZE 128

/* Size of the ban heap. */
#define BAN_HEAP_SIZE 128

/* Size of the channel heap. */
#define CHANNEL_HEAP_SIZE 256

/* Size of the client heap. */
#define CLIENT_HEAP_SIZE 256

/* Size of the confitem heap. */
#define CONFITEM_HEAP_SIZE 128

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
/* #undef CRAY_STACKSEG_END */

/* This is a Cygwin system */
/* #undef CYGWIN */

/* Define to 1 if using `alloca.c'. */
/* #undef C_ALLOCA */

/* Size of the dlink_node heap. */
#define DNODE_HEAP_SIZE 512

/* Define if SSP C support is enabled. */
/* #undef ENABLE_SSP_CC */

/* Prefix where config files are installed. */
#define ETC_DIR "/home/j4jackj/ircd/etc"

/* Size of fd heap. */
#define FD_HEAP_SIZE 128

/* Define to 1 if you have `alloca', as a function or macro. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#define HAVE_ALLOCA_H 1

/* Define to 1 if you have the <arpa/inet.h> header file. */
#define HAVE_ARPA_INET_H 1

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to enable cryptographic functions, requires OpenSSL */
#define HAVE_LIBCRYPTO 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* Define to 1 if you have the <stddef.h> header file. */
#define HAVE_STDDEF_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/resource.h> header file. */
#define HAVE_SYS_RESOURCE_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have <sys/wait.h> that is POSIX.1 compatible. */
#define HAVE_SYS_WAIT_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if zlib (-lz) is available. */
#define HAVE_ZLIB 1

/* Prefix where help file are installed. */
#define HELP_DIR "/home/j4jackj/ircd/help"

/* Prefix where the ircd is installed. */
#define IRCD_PREFIX "/home/j4jackj/ircd"

/* Size of the local client heap. */
#define LCLIENT_HEAP_SIZE 128

/* Prefix where to install non-user executables. */
#define LIBEXEC_DIR "/home/j4jackj/ircd/libexec/sporksircd"

/* Size of the linebuf heap. */
#define LINEBUF_HEAP_SIZE 128

/* Size of the list heap. */
#define LIST_HEAP_SIZE 512

/* Prefix where to write logfiles. */
#define LOG_DIR "/home/j4jackj/ircd/logs"

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Sizeof member heap. */
#define MEMBER_HEAP_SIZE 256

/* This is a MinGW system */
/* #undef MINGW */

/* Prefix where modules are installed. */
#define MODULE_DIR "/home/j4jackj/ircd/modules"

/* Size of the monitor heap. */
#define MONITOR_HEAP_SIZE 128

/* Define this to disable debugging support. */
#define NDEBUG 1

/* Size of the nick delay heap. */
#define ND_HEAP_SIZE 128

/* Nickname length */
#define NICKLEN (20+1)

/* Size of the WHOWAS array. */
#define NICKNAMEHISTORYLENGTH 1500

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef NO_MINUS_C_MINUS_O */

/* Name of package */
#define PACKAGE "sporksircd"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "sporksircd"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "sporksircd 1.4.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "sporksircd"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.4.0"

/* Size of the pre-client heap. */
#define PCLIENT_HEAP_SIZE 32

/* configure arguments */
#define RATBOX_CONFIGURE_OPTS " --enable-ltdl-convenience"

/* Defined to mark profiling is enabled */
/* #undef RATBOX_PROFILE */

/* Extension that shared libs use */
#define SHLIBEXT ".so"

/* Define this to enable soft asserts. */
/* #undef SOFT_ASSERT */

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at runtime.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Define to 1 if dynamic modules cant be used. */
/* #undef STATIC_MODULES */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if string.h may be included along with strings.h */
#define STRING_WITH_STRINGS 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Topic length */
#define TOPICLEN (450+1)

/* Size of the topic heap. */
#define TOPIC_HEAP_SIZE 256

/* Size of the user heap. */
#define USER_HEAP_SIZE 128

/* Define this to enable IO Debug hooks. */
/* #undef USE_IODEBUG_HOOKS */

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Version number of package */
#define VERSION "1.4.0"

/* This is a Windows system */
/* #undef WINDOWS */

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
#define YYTEXT_POINTER 1

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */
