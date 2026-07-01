#include <stdio.h>
#include <assert.h>
#include <stdint.h>
#include "bitwise.h"

/*----------------------------------------------------------*/
/* convert_endian()                                         */
/*----------------------------------------------------------*/

void test_convert_endian(void)
{
    assert(convert_endian(0x11223344) == 0x44332211);
    assert(convert_endian(0x12345678) == 0x78563412);
    assert(convert_endian(0x00000000) == 0x00000000);
    assert(convert_endian(0xFFFFFFFF) == 0xFFFFFFFF);

    printf("PASS : convert_endian()\n");
}

/*----------------------------------------------------------*/
/* bit_reversal()                                           */
/*----------------------------------------------------------*/

void test_bit_reversal(void)
{
    assert(bit_reversal(0x00000001) == 0x80000000);
    assert(bit_reversal(0xFFFFFFFF) == 0xFFFFFFFF);
    assert(bit_reversal(0x00000000) == 0x00000000);
    assert(bit_reversal(0x80000000) == 0x00000001);

    printf("PASS : bit_reversal()\n");
}

/*----------------------------------------------------------*/
/* rotate_left()                                            */
/*----------------------------------------------------------*/

void test_rotate_left(void)
{
    assert(rotate_left(0x00000001,1) == 0x00000002);
    assert(rotate_left(0x80000000,1) == 0x00000001);
    assert(rotate_left(0x12345678,4) == 0x23456781);
    assert(rotate_left(0xFFFFFFFF,8) == 0xFFFFFFFF);

    printf("PASS : rotate_left()\n");
}

/*----------------------------------------------------------*/
/* rotate_right()                                           */
/*----------------------------------------------------------*/

void test_rotate_right(void)
{
    assert(rotate_right(0x00000002,1) == 0x00000001);
    assert(rotate_right(0x00000001,1) == 0x80000000);
    assert(rotate_right(0x12345678,4) == 0x81234567);
    assert(rotate_right(0xFFFFFFFF,8) == 0xFFFFFFFF);

    printf("PASS : rotate_right()\n");
}

/*----------------------------------------------------------*/
/* swap_odd_even_positions()                                */
/*----------------------------------------------------------*/

void test_swap_odd_even_positions(void)
{
    assert(swap_odd_even_positions(0xAAAAAAAA) == 0x55555555);
    assert(swap_odd_even_positions(0x55555555) == 0xAAAAAAAA);
    assert(swap_odd_even_positions(0x00000000) == 0x00000000);
    assert(swap_odd_even_positions(0xFFFFFFFF) == 0xFFFFFFFF);

    printf("PASS : swap_odd_even_positions()\n");
}

/*----------------------------------------------------------*/
/* swapping_of_two_bits()                                   */
/*----------------------------------------------------------*/

void test_swapping_of_two_bits(void)
{
    /* Different bits */
    assert(swapping_of_two_bits(0x00000001,0,1) == 0x00000002);

    /* Same bits -> unchanged */
    assert(swapping_of_two_bits(0x00000003,0,1) == 0x00000003);

    /* Swap MSB and LSB */
    assert(swapping_of_two_bits(0x80000000,31,0) == 0x00000001);

    /* Both bits are zero */
    assert(swapping_of_two_bits(0x00000000,5,10) == 0x00000000);

    printf("PASS : swapping_of_two_bits()\n");
}

/*----------------------------------------------------------*/
/* Main                                                     */
/*----------------------------------------------------------*/

int main(void)
{
    printf("Running Bitwise Unit Tests...\n\n");

    test_convert_endian();
    test_bit_reversal();
    test_rotate_left();
    test_rotate_right();
    test_swap_odd_even_positions();
    test_swapping_of_two_bits();

    printf("\n====================================\n");
    printf(" ALL TEST CASES PASSED\n");
    printf("====================================\n");

    return 0;
}
