#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
#AC_INIT([FULL-PACKAGE-NAME], [VERSION], [BUG-REPORT-ADDRESS])
AC_INIT([vulnerabilities], [0.1], [grauwoelfchen@gmail.com])
AM_INIT_AUTOMAKE
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([
  Makefile
  src/Makefile
])

# Checks for programs.
AC_PROG_CC

# Checks for libraries.

# Checks for header files.
AC_CHECK_HEADERS([stdio.h],[AC_DEFINE(HAVE_STDIO_H)],[AC_MSG_ERROR([Header file not found: stdio.h])])
AC_CHECK_HEADERS([string.h],[AC_DEFINE(HAVE_STRING_H)],[AC_MSG_ERROR([Header file not found: string.h])])
AC_CHECK_HEADERS([stdlib.h],[AC_DEFINE(HAVE_STDLIB_H)],[AC_MSG_ERROR([Header file not found: stdlib.h])])
AC_CHECK_HEADERS([inttypes.h],[AC_DEFINE(HAVE_INTTYPES_H)],[AC_MSG_ERROR([Header file not found: inttypes.h])])

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_OUTPUT
