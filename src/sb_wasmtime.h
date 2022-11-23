/* Copyright (C) 2006 MySQL AB
   Copyright (C) 2006-2018 Alexey Kopytov <akopytov@gmail.com>

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
*/

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "sysbench.h"
#include "sb_wasm.h"

void sb_wasmtime_done(void);

bool sb_wasmtime_custom_command_defined(const char *name);

int sb_wasmtime_report_thread_init(void);

void sb_wasmtime_report_thread_done(void *);

bool sb_wasmtime_loaded(void);

sb_wasm_runtime *create_wasmtime_vm(void);