// program to calculate number of set bits in a number

#include <stdio.h>

int main()
{
    int num = 11;
    int count = 0;

    while (num)
    {
        num = num & (num - 1);
        count++;
    }

    printf("No. of set bits = %d\n", count);

    return 0;
}
