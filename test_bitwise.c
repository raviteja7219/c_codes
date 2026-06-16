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

static void test_bit_reversal(void)
{
    assert(bit_reversal(0x000000FF) == 0xFF000000);
    assert(bit_reversal(0x00000001) == 0x80000000);
    assert(bit_reversal(0x80000000) == 0x00000001);
    assert(bit_reversal(0xFFFFFFFF) == 0xFFFFFFFF);
    assert(bit_reversal(0x00000000) == 0x00000000);

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

static void test_rotate_right(void)
{
    assert(rotate_right(512, 2) == 128);
    assert(rotate_right(2, 1) == 1);
    assert(rotate_right(0x80000000, 31) == 1);
    assert(rotate_right(0x80000000, 1) == 0x40000000);
    assert(rotate_right(0xFFFFFFFF, 4) == 0xFFFFFFFF);

    printf("PASS : rotate_right()\n");
}

static void test_swap_odd_even_positions(void)
{
    assert(swap_odd_even_positions(128) == 64);
    assert(swap_odd_even_positions(1) == 2);
    assert(swap_odd_even_positions(2) == 1);
    assert(swap_odd_even_positions(0xAAAAAAAA) == 0x55555555);
    assert(swap_odd_even_positions(0x55555555) == 0xAAAAAAAA);

    printf("PASS : swap_odd_even_positions()\n");
}

static void test_swapping_of_two_bits(void)
{
    assert(swapping_of_two_bits(0x11111111, 31, 0) == 0x91111110);
    assert(swapping_of_two_bits(0x00000001, 31, 0) == 0x80000000);
    assert(swapping_of_two_bits(0x80000000, 31, 0) == 0x00000001);

    /* same bits -> no change */
    assert(swapping_of_two_bits(0xFFFFFFFF, 31, 0) == 0xFFFFFFFF);
    assert(swapping_of_two_bits(0x00000000, 31, 0) == 0x00000000);

    printf("PASS : swapping_of_two_bits()\n");
}

int main(void)
{
    printf("Running Bitwise Unit Tests...\n\n");

    test_convert_endian();
    test_bit_reversal();
    test_rotate_left();
    test_rotate_right();
    test_swap_odd_even_positions();
    test_swapping_of_two_bits();

    printf("\nALL TEST CASES PASSED\n");

    return 0;
}

