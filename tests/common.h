/*
MIT License

Copyright (c) 2020 Marcin Borowicz

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#ifndef COMMON_H
#define COMMON_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>

#include "mmvp.h"

#define TEST_COMMON_DEVICE_MEMORY_TOTAL_SIZE    (8192UL)
#define TEST_COMMON_DEVICE_MEMORY_PAGE_SIZE     (32UL)

extern const struct mmvp_device_descriptor *test_device_descriptor;

#define TEST_COMMON_PARTITION1_SIZE             (256UL)
#define TEST_COMMON_PARTITION1_ADDRESS          (0x0000UL)

#define TEST_COMMON_PARTITION2_SIZE             (512UL)
#define TEST_COMMON_PARTITION2_ADDRESS          (0x1000UL)

extern const struct mmvp_partition_descriptor *test_partition1_descriptor;
extern const struct mmvp_partition_descriptor *test_partition2_descriptor;

#ifdef __cplusplus
}
#endif

#endif /* MMVP_H */
