#ifndef BITWISE_H
#define BITWISE_H

#include <stdint.h>

uint32_t convert_endian(uint32_t value);
uint32_t reverse_bits(uint32_t value);
uint32_t rotate_left(uint32_t data, int pos);
uint32_t swap_odd_even(uint32_t data);
uint32_t swap_bits(uint32_t n, int pos1, int pos2);

#endif

