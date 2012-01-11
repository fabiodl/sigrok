/*
 * This file is part of the sigrok project.
 *
 * Copyright (C) 2012 Uwe Hermann <uwe@hermann-uwe.de>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
 */

#ifndef SIGROKFILE_SIGROKFILE_INTERNAL_H
#define SIGROKFILE_SIGROKFILE_INTERNAL_H

/*--- log.c -----------------------------------------------------------------*/

int srf_log(int loglevel, const char *format, ...);
int srf_spew(const char *format, ...);
int srf_dbg(const char *format, ...);
int srf_info(const char *format, ...);
int srf_warn(const char *format, ...);
int srf_err(const char *format, ...);

#endif
