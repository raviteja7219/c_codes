// test_no_of_set_bits.c

#include <stdio.h>
#include <assert.h>

/* Function under test */
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

void test_count_set_bits()
{
    /* Basic cases */
    assert(count_set_bits(0) == 0);
    assert(count_set_bits(1) == 1);
    assert(count_set_bits(2) == 1);
    assert(count_set_bits(3) == 2);

    /* Given example */
    assert(count_set_bits(11) == 3);

    /* Powers of two */
    assert(count_set_bits(4) == 1);
    assert(count_set_bits(8) == 1);
    assert(count_set_bits(16) == 1);
    assert(count_set_bits(32) == 1);

    /* Multiple set bits */
    assert(count_set_bits(7) == 3);
    assert(count_set_bits(15) == 4);
    assert(count_set_bits(31) == 5);
    assert(count_set_bits(63) == 6);

    /* Random values */
    assert(count_set_bits(10) == 2);   // 1010
    assert(count_set_bits(21) == 3);   // 10101
    assert(count_set_bits(255) == 8);  // 11111111
    assert(count_set_bits(256) == 1);  // 100000000

    printf("All test cases passed!\n");
}

int main()
{
    test_count_set_bits();
    return 0;
}

