//
// Bareflank Hypervisor
//
// Copyright (C) 2015 Assured Information Security, Inc.
// Author: Rian Quinn        <quinnr@ainfosec.com>
// Author: Brendan Kerrigan  <kerriganb@ainfosec.com>
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA

#ifndef VMM_BASE_H
#define VMM_BASE_H

#include <intrinsics/intrinsics_base.h>
#include <memory_manager/memory_manager_base.h>

namespace vmm_error
{
    enum type
    {
        success = 0,
        failure = 1,
        not_supported = 2,
        out_of_memory = 3
    };
};

class vmm_base
{
public:

    vmm_base() {}
    virtual ~vmm_base() {}

    virtual vmm_error::type init(intrinsics_base *intrinsics,
                                 memory_manager_base *memory_manager)
    { return vmm_error::failure; }

    virtual vmm_error::type start()
    { return vmm_error::failure; }

    virtual vmm_error::type stop()
    { return vmm_error::failure; }
};

#endif
