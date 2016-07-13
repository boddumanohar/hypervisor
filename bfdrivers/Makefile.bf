#
# Bareflank Hypervisor
#
# Copyright (C) 2015 Assured Information Security, Inc.
# Author: Rian Quinn        <quinnr@ainfosec.com>
# Author: Brendan Kerrigan  <kerriganb@ainfosec.com>
#
# This library is free software; you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either
# version 2.1 of the License, or (at your option) any later version.
#
# This library is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
# Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public
# License along with this library; if not, write to the Free Software
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA

################################################################################
# Subdirs
################################################################################

ifeq ($(shell uname -s), Linux)
    SUBDIRS += dummy_add_md_failure
    SUBDIRS += dummy_add_md_success
    SUBDIRS += dummy_get_drr_failure
    SUBDIRS += dummy_get_drr_success
    SUBDIRS += dummy_init_vmm_failure
    SUBDIRS += dummy_init_vmm_success
    SUBDIRS += dummy_misc
    SUBDIRS += dummy_start_vmm_failure
    SUBDIRS += dummy_start_vmm_success
    SUBDIRS += dummy_stop_vmm_failure
    SUBDIRS += dummy_stop_vmm_success
    SUBDIRS += src
    SUBDIRS += bin
    SUBDIRS += test
endif

################################################################################
# Common
################################################################################

include %HYPER_ABS%/common/common_subdir.mk
