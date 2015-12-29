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

#include <test.h>
#include <memory_manager/memory_manager.h>

// - malloc(0) == 0
// - malloc(10) == valid address
// - malloc(10), malloc(10) = virt address + 10 of pervious address
// - malloc(10), free(), malloc(10) == same virt address
// - malloc(page_size) == page aligned memory
// - free(0) is no big deal
// - free(address that doesn't exit) is no big deal
// - free(valid address) free's memory
// - free(valid address + random offset) free's all of the memory
// - malloc all of memory
// - over allocate memory that is aligned
// - over allocate memory that is unaligned (for example, there are 4 bytes left, and allocate 10)
// - allocate all of memory, free all of memory, and then allocate
// - make sure that we can allocate all of the pages in the memory pool and then free them
// - test virt to block
// - test block to virt
// - test is block page aligned
// - test byte alignment that is some random amount, like 16 byte alignment
// - after allocating 5 bytes
// - test cache line alignment
// - test more than a cache line alignment
// - test 4k alignment





// void
// memory_manager_ut::test_memory_manager_add_invalid_page()
// {
//     page pg;
//     memory_manager mm;

//     EXPECT_TRUE(mm.add_page(pg) == memory_manager_error::failure);
// }

// void
// memory_manager_ut::test_memory_manager_add_valid_page()
// {
//     page pg(this, this, 10);
//     memory_manager mm;

//     EXPECT_TRUE(mm.add_page(pg) == memory_manager_error::success);
// }

// void
// memory_manager_ut::test_memory_manager_add_same_page()
// {
//     page pg(this, this, 10);
//     memory_manager mm;

//     mm.add_page(pg);

//     EXPECT_TRUE(mm.add_page(pg) == memory_manager_error::already_added);
// }

// void
// memory_manager_ut::test_memory_manager_add_too_many_pages()
// {
//     page pg(this, this, MAX_PAGES + 1);
//     memory_manager mm;

//     for (auto i = 0; i < MAX_PAGES; i++)
//     {
//         page pg(this, this, i + 1);
//         mm.add_page(pg);
//     }

//     EXPECT_TRUE(mm.add_page(pg) == memory_manager_error::full);
// }

// void
// memory_manager_ut::test_memory_manager_alloc_page_null_arg()
// {
//     memory_manager mm;
//     EXPECT_TRUE(mm.alloc_page(0) == memory_manager_error::failure);
// }

// void
// memory_manager_ut::test_memory_manager_alloc_page_too_many_pages()
// {
//     page pg(this, this, MAX_PAGES);
//     memory_manager mm;

//     mm.add_page(pg);
//     mm.alloc_page(&pg);

//     EXPECT_TRUE(mm.alloc_page(&pg) == memory_manager_error::out_of_memory);
// }

// void
// memory_manager_ut::test_memory_manager_alloc_page()
// {
//     page pg(this, this, MAX_PAGES);
//     memory_manager mm;

//     mm.add_page(pg);

//     EXPECT_TRUE(pg.is_allocated() == false);
//     EXPECT_TRUE(mm.alloc_page(&pg) == memory_manager_error::success);
//     EXPECT_TRUE(pg.is_allocated() == true);
// }

// void
// memory_manager_ut::test_memory_manager_free_allocated_page()
// {
//     page pg(this, this, MAX_PAGES);
//     memory_manager mm;

//     mm.add_page(pg);
//     mm.alloc_page(&pg);

//     EXPECT_TRUE(pg.is_allocated() == true);
//     mm.free_page(pg);
//     EXPECT_TRUE(pg.is_allocated() == false);
// }
