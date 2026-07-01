#include <stdio.h>
#include <stdint.h>
#include <assert.h>

#include "no_of_set_bits.h"

void test_no_of_set_bits(void)
{
    assert(no_of_set_bits(0) == 0);
    printf("PASS : no_of_set_bits(0)\n");

    assert(no_of_set_bits(1) == 1);
    printf("PASS : no_of_set_bits(1)\n");

    assert(no_of_set_bits(2) == 1);
    printf("PASS : no_of_set_bits(2)\n");

    assert(no_of_set_bits(3) == 2);
    printf("PASS : no_of_set_bits(3)\n");

    assert(no_of_set_bits(11) == 3);
    printf("PASS : no_of_set_bits(11)\n");

    assert(no_of_set_bits(15) == 4);
    printf("PASS : no_of_set_bits(15)\n");

    assert(no_of_set_bits(255) == 8);
    printf("PASS : no_of_set_bits(255)\n");

    assert(no_of_set_bits(0xFFFFFFFFU) == 32);
    printf("PASS : no_of_set_bits(0xFFFFFFFF)\n");

    printf("\nAll no_of_set_bits() tests passed.\n");
}

int main(void)
{
    printf("Running Set Bits Unit Tests...\n\n");

    test_no_of_set_bits();

    printf("\n====================================\n");
    printf(" ALL TEST CASES PASSED\n");
    printf("====================================\n");

    return 0;
}
