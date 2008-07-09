#ifndef _CONFIG_H
#define _CONFIG_H
/* Define to the full name of this package. */
#define PACKAGE_NAME "XChat"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "XChat 2.8.6"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "xchat"

/* Define to the version of this package. */
#define PACKAGE_VERSION "2.8.6"

#define XCHATLIBDIR "/usr/local/lib"

#define MYVERSION XCHAT_AQUA_VERSION

#define HAVE_SNPRINTF  1
#define HAVE_VSNPRINTF 1
#define USE_IPV6 1
#define USE_PLUGIN 1
#define USE_OPENSSL 1
#include "glibconfig.h"
#include <stdio.h>
#endif