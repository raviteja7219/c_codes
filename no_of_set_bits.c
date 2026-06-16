// no_of_set_bits.c

#include <stdio.h>

int count_set_bits(int num)
{
    int count = 0;

    while (num)
    {
        num = num & (num - 1);
        count++;
    }

    return count;
}

int main()
{
    int num = 11;

    printf("No. of set bits = %d\n", count_set_bits(num));

    return 0;
}
