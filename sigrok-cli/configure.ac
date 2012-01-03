##
## This file is part of the sigrok project.
##
## Copyright (C) 2010 Bert Vermeulen <bert@biot.com>
##
## This program is free software: you can redistribute it and/or modify
## it under the terms of the GNU General Public License as published by
## the Free Software Foundation, either version 3 of the License, or
## (at your option) any later version.
##
## This program is distributed in the hope that it will be useful,
## but WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
## GNU General Public License for more details.
##
## You should have received a copy of the GNU General Public License
## along with this program.  If not, see <http://www.gnu.org/licenses/>.
##

AC_PREREQ(2.61)

AC_INIT([sigrok-cli], [0.1], [sigrok-devel@lists.sourceforge.net],
        [sigrok-cli], [http://www.sigrok.org])

AC_CONFIG_SRCDIR([sigrok-cli.c])

AC_CONFIG_HEADERS([config.h])
AC_CONFIG_MACRO_DIR([m4])

AM_INIT_AUTOMAKE([-Wall -Werror foreign std-options])
m4_ifdef([AM_SILENT_RULES], [AM_SILENT_RULES([yes])])

AH_TOP([#ifndef SGIROK_CLI_CONFIG_H
#define SIGROK_CLI_CONFIG_H    /* To stop multiple inclusions. */])
AH_BOTTOM([#endif /* SIGROK_CLI_CONFIG_H */])

CFLAGS="-g -Wall -Wextra"

# Checks for programs.
AC_PROG_CC
AC_PROG_CPP
AC_PROG_INSTALL
AC_PROG_LN_S

# Initialize libtool.
LT_INIT

# Initialize pkg-config.
# We require at least 0.22, as "Requires.private" behaviour changed there.
PKG_PROG_PKG_CONFIG([0.22])

# Checks for libraries.

PKG_CHECK_MODULES([libsigrok], [libsigrok],
	[CFLAGS="$CFLAGS $libsigrok_CFLAGS";
	LIBS="$LIBS $libsigrok_LIBS"])

PKG_CHECK_MODULES([libsigrokdecode], [libsigrokdecode],
	[CFLAGS="$CFLAGS $libsigrokdecode_CFLAGS";
	LIBS="$LIBS $libsigrokdecode_LIBS"])

# Checks for header files.
# These are already checked: inttypes.h stdint.h stdlib.h string.h unistd.h.
AC_CHECK_HEADERS([sys/time.h termios.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_C_INLINE
AC_TYPE_INT8_T
AC_TYPE_INT16_T
AC_TYPE_INT32_T
AC_TYPE_INT64_T
AC_TYPE_UINT8_T
AC_TYPE_UINT16_T
AC_TYPE_UINT32_T
AC_TYPE_UINT64_T
AC_TYPE_SIZE_T

# Checks for library functions.
AC_CHECK_FUNCS([strcasecmp strchr strerror strstr strtol])

AC_SUBST(MAKEFLAGS, '--no-print-directory')
AC_SUBST(AM_LIBTOOLFLAGS, '--silent')

AC_CONFIG_FILES([Makefile
		 doc/Makefile])

AC_OUTPUT
