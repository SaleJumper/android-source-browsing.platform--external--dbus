/* -*- mode: C; c-file-style: "gnu" -*- */
/* dbus-gutils.h Utils shared between convenience lib and installed lib
 *
 * Copyright (C) 2003  Red Hat, Inc.
 *
 * Licensed under the Academic Free License version 1.2
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
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#ifndef DBUS_GLIB_UTILS_H
#define DBUS_GLIB_UTILS_H

#ifndef DOXYGEN_SHOULD_SKIP_THIS

#include <dbus/dbus.h>
#include <glib-object.h>

G_BEGIN_DECLS

char** _dbus_gutils_split_path (const char *path);

G_END_DECLS

#endif /* DBUS_GLIB_UTILS_H */

#endif /* DOXYGEN_SHOULD_SKIP_THIS */