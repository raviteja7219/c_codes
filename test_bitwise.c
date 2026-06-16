#include <assert.h>
#include <stdint.h>
#include <stdio.h>

#include "bitwise.h"

static void test_convert_endian(void)
{
    assert(convert_endian(0x11223344) == 0x44332211);
    assert(convert_endian(0x12345678) == 0x78563412);
    assert(convert_endian(0x00000000) == 0x00000000);
    assert(convert_endian(0xFFFFFFFF) == 0xFFFFFFFF);
    assert(convert_endian(0xAABBCCDD) == 0xDDCCBBAA);

    printf("PASS : convert_endian()\n");
}

static void test_reverse_bits(void)
{
    assert(reverse_bits(0x000000FF) == 0xFF000000);
    assert(reverse_bits(0x00000001) == 0x80000000);
    assert(reverse_bits(0x80000000) == 0x00000001);
    assert(reverse_bits(0xFFFFFFFF) == 0xFFFFFFFF);
    assert(reverse_bits(0x00000000) == 0x00000000);

    printf("PASS : reverse_bits()\n");
}

static void test_rotate_left(void)
{
    assert(rotate_left(128, 2) == 512);
    assert(rotate_left(1, 1) == 2);
    assert(rotate_left(1, 31) == 0x80000000);
    assert(rotate_left(0x80000000, 1) == 1);
    assert(rotate_left(0xFFFFFFFF, 5) == 0xFFFFFFFF);

    printf("PASS : rotate_left()\n");
}

static void test_swap_odd_even(void)
{
    assert(swap_odd_even(128) == 64);
    assert(swap_odd_even(1) == 2);
    assert(swap_odd_even(2) == 1);
    assert(swap_odd_even(0xAAAAAAAA) == 0x55555555);
    assert(swap_odd_even(0x55555555) == 0xAAAAAAAA);

    printf("PASS : swap_odd_even()\n");
}

static void test_swap_bits(void)
{
    assert(swap_bits(0x11111111, 31, 0) == 0x91111110);
    assert(swap_bits(0x00000001, 31, 0) == 0x80000000);
    assert(swap_bits(0x80000000, 31, 0) == 0x00000001);

    /* same bits -> no change */
    assert(swap_bits(0xFFFFFFFF, 31, 0) == 0xFFFFFFFF);
    assert(swap_bits(0x00000000, 31, 0) == 0x00000000);

    printf("PASS : swap_bits()\n");
}

int main(void)
{
    printf("Running Bitwise Unit Tests...\n\n");

    test_convert_endian();
    test_reverse_bits();
    test_rotate_left();
    test_swap_odd_even();
    test_swap_bits();

    printf("\nALL TEST CASES PASSED\n");

    return 0;
}

