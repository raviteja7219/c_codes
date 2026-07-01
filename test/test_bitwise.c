// Online C compiler to run C program for bitwise question using pre-processors
// Owner : rponukup

#include "bitwise.h"

uint32_t convert_endian(uint32_t value)
{
    return ((0x000000FF & value) << 24) |
           ((0x0000FF00 & value) << 8) |
           ((0x00FF0000 & value) >> 8) |
           ((0xFF000000 & value) >> 24);
}

uint32_t bit_reversal(uint32_t data)
{
    uint32_t result = 0;

    for (int i = 0; i < 32; i++)
    {
        result <<= 1;
        result |= (data & 1U);
        data >>= 1;
    }

    return result;
}

uint32_t rotate_left(uint32_t data, int pos)
{
    return (data << pos) | (data >> (32 - pos));
}

uint32_t rotate_right(uint32_t data, int pos)
{
    return (data >> pos) | (data << (32 - pos));
}

uint32_t swap_odd_even_positions(uint32_t data)
{
    return ((data & 0xAAAAAAAA) >> 1) |
           ((data & 0x55555555) << 1);
}

uint32_t swapping_of_two_bits(uint32_t n, int pos1, int pos2)
{
    uint32_t bit1 = (n >> pos1) & 1;
    uint32_t bit2 = (n >> pos2) & 1;

    if(bit1 != bit2)
    {
        n ^= (1U << pos1);
        n ^= (1U << pos2);
    }

    return n;
}

