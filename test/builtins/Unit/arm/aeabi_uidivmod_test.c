//===-- aeabi_uidivmod_test.c - Test __aeabi_uidivmod ---------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file tests __aeabi_uidivmod for the compiler_rt library.
//
//===----------------------------------------------------------------------===//

#include "int_lib.h"
#include <stdio.h>

// Based on udivmodsi4_test.c

extern du_int __aeabi_uidivmod(su_int a, su_int b);

int test__aeabi_uidivmod(su_int a, su_int b,
						su_int expected_result, su_int expected_rem)
{
    du_int ret = __aeabi_uidivmod(a, b);
    su_int rem = ret >> 32;
    si_int result = ret & 0xFFFFFFFF;

    if (result != expected_result) {
        printf("error in __aeabi_uidivmod: %u / %u = %u, expected %u\n",
               a, b, result, expected_result);
		return 1;
	}
    if (rem != expected_rem) {
        printf("error in __aeabi_uidivmod: %u mod %u = %u, expected %u\n",
               a, b, rem, expected_rem);
		return 1;
	}

    return 0;
}


int main()
{
    if (test__aeabi_uidivmod(0, 1, 0, 0))
        return 1;

    if (test__aeabi_uidivmod(2, 1, 2, 0))
        return 1;

	if (test__aeabi_uidivmod(19, 5, 3, 4))
        return 1;

	if (test__aeabi_uidivmod(0x80000000, 8, 0x10000000, 0))
        return 1;
 
 	if (test__aeabi_uidivmod(0x80000003, 8, 0x10000000, 3))
        return 1;

	return 0;
}
