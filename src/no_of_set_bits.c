#include "no_of_set_bits.h"

uint32_t no_of_set_bits(uint32_t num)
{
    uint32_t count = 0;

    while (num)
    {
        num &= (num - 1);
        count++;
    }

    return count;
}
