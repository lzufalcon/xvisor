/*
 * Copyright (C) 2002 Roman Zippel <zippel@linux-m68k.org>
 * Released under the terms of the GNU GPL v2.0.
 */

#ifndef OPENCONF_CONST_H
#define OPENCONF_CONST_H

#define OPENCONF_PACKAGE "openconf"
#define OPENCONF_LOCALEDIR "/usr/share/locale"

#define OPENCONF_PROJECT_ENVNAME "OPENCONF_PROJECT"
#define OPENCONF_VERSION_ENVNAME "OPENCONF_VERSION"
#define OPENCONF_INPUT_ENVNAME "OPENCONF_INPUT"
#define OPENCONF_CONFIG_ENVNAME "OPENCONF_CONFIG"
#define OPENCONF_TMPDIR_ENVNAME "OPENCONF_TMPDIR"
#define OPENCONF_AUTOCONFIG_ENVNAME "OPENCONF_AUTOCONFIG"
#define OPENCONF_AUTOHEADER_ENVNAME "OPENCONF_AUTOHEADER"
#define OPENCONF_OVERWRITECONFIG_ENVNAME "OPENCONF_OVERWRITECONFIG"
#define OPENCONF_NOTIMESTAMP_ENVNAME "OPENCONF_NOTIMESTAMP"
#define OPENCONF_ALLCONFIG_ENVNAME "OPENCONF_ALLCONFIG"
#define OPENCONF_NOSILENTUPDATE_ENVNAME "OPENCONF_NOSILENTUPDATE"
#define OPENCONF_SRCTREE_ENVNAME "OPENCONF_SRCTREE"
#define OPENCONF_MENUCONFIG_MODE_ENVNAME "OPENCONF_MENUCONFIG_MODE"
#define OPENCONF_MENUCONFIG_COLOR_ENVNAME "OPENCONF_MENUCONFIG_COLOR"

#define OPENCONF_PROJECT_DEFAULT "Sample Project"
#define OPENCONF_VERSION_DEFAULT "1.0"
#define OPENCONF_INPUT_DEFAULT "openconf.cfg"
#define OPENCONF_CONFIG_DEFAULT ".config"
#define OPENCONF_TMPDIR_DEFAULT "./tmp"
#define OPENCONF_AUTOCONFIG_DEFAULT "openconf.conf"
#define OPENCONF_AUTOHEADER_DEFAULT "openconf.h"
#define OPENCONF_ALLCONFIG_ALL "all.config"
#define OPENCONF_ALLCONFIG_ALLNO "allno.config"
#define OPENCONF_ALLCONFIG_ALLMOD "allmod.config"
#define OPENCONF_ALLCONFIG_ALLYES "allyes.config"
#define OPENCONF_ALLCONFIG_ALLRANDOM "allrandom.config"

#ifndef PATH_MAX
#define PATH_MAX 1024
#endif

#endif /* OPENCONF_CONST_H */