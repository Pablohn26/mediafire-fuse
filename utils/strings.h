/*
 * Copyright (C) 2013 Bryan Christ <bryan.christ@mediafire.com>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2, as published by
 * the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 51
 * Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 */


#ifndef _STR_TOOLS_H_
#define _STR_TOOLS_H_

#include <stdint.h>

char*       strdup_printf(char* fmt, ...);

char*       strdup_join(char *string1,char *string2);

char*       strdup_subst(char *string,char *str_old,char *str_new, unsigned int max);

void        string_chomp(char *string);

// void        string_strip_head(char *string,char c);

// void        string_strip_tail(char *string,char c);

#endif