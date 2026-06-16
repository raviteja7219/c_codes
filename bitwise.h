#ifndef BITWISE_H
#define BITWISE_H

#include <stdint.h>

uint32_t convert_endian(uint32_t value);
uint32_t bit_reversal(uint32_t value);
uint32_t rotate_left(uint32_t data, int pos);
uint32_t rotate_right(uint32_t data, int pos);
uint32_t swap_odd_even_positions(uint32_t data);
uint32_t swapping_of_two_bits(uint32_t n, int pos1, int pos2);

#endif

