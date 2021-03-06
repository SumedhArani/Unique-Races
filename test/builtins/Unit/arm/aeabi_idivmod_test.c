//===-- aeabi_idivmod_test.c - Test __aeabi_idivmod -----------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file tests __aeabi_idivmod for the compiler_rt library.
//
//===----------------------------------------------------------------------===//

#include "int_lib.h"
#include <stdio.h>

// Based on divmodsi4_test.c

extern du_int __aeabi_idivmod(si_int a, si_int b);

int test__aeabi_idivmod(si_int a, si_int b,
						si_int expected_result, si_int expected_rem)
{
	  si_int rem;
    du_int ret = __aeabi_idivmod(a, b);
    rem = ret >> 32;
    si_int result = ret & 0xFFFFFFFF;
    if (result != expected_result) {
        printf("error in __aeabi_idivmod: %d / %d = %d, expected %d\n",
               a, b, result, expected_result);
		return 1;
	}
    if (rem != expected_rem) {
        printf("error in __aeabi_idivmod: %d mod %d = %d, expected %d\n",
               a, b, rem, expected_rem);
		return 1;
	}

    return 0;
}


int main()
{
    if (test__aeabi_idivmod(0, 1, 0, 0))
        return 1;
    if (test__aeabi_idivmod(0, -1, 0, 0))
        return 1;

    if (test__aeabi_idivmod(2, 1, 2, 0))
        return 1;
    if (test__aeabi_idivmod(2, -1, -2, 0))
        return 1;
    if (test__aeabi_idivmod(-2, 1, -2, 0))
        return 1;
    if (test__aeabi_idivmod(-2, -1, 2, 0))
        return 1;

	if (test__aeabi_idivmod(7, 5, 1, 2))
        return 1;
	if (test__aeabi_idivmod(-7, 5, -1, -2))
        return 1;
	if (test__aeabi_idivmod(19, 5, 3, 4))
        return 1;
	if (test__aeabi_idivmod(19, -5, -3, 4))
        return 1;

	if (test__aeabi_idivmod(0x80000000, 8, 0xf0000000, 0))
        return 1;
	if (test__aeabi_idivmod(0x80000007, 8, 0xf0000001, -1))
        return 1;

    return 0;
}
