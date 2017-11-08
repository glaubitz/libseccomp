/**
 * Enhanced Seccomp m68k Specific Code
 *
 * Copyright (c) 2015 Freescale <bogdan.purcareata@freescale.com>
 *               2017 John Paul Adrian Glaubitz <glaubitz@physik.fu-berlin.de>
 * Author: Bogdan Purcareata <bogdan.purcareata@freescale.com>
 *         John Paul Adrian Glaubitz <glaubitz@physik.fu-berlin.de>
 *
 * Derived from the PPC-specific code
 *
 */

/*
 * This library is free software; you can redistribute it and/or modify it
 * under the terms of version 2.1 of the GNU Lesser General Public License as
 * published by the Free Software Foundation.
 *
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License
 * for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library; if not, see <http://www.gnu.org/licenses>.
 */

#include <stdlib.h>
#include <errno.h>
#include <linux/audit.h>

#include "arch.h"
#include "arch-m68k.h"

const struct arch_def arch_def_m68k = {
	.token = SCMP_ARCH_M68K,
	.token_bpf = AUDIT_ARCH_M68K,
	.size = ARCH_SIZE_32,
	.endian = ARCH_ENDIAN_BIG,
	.syscall_resolve_name = m68k_syscall_resolve_name,
	.syscall_resolve_num = m68k_syscall_resolve_num,
	.syscall_rewrite = NULL,
	.rule_add = NULL,
};
