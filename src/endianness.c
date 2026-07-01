#include <stdio.h>
#include <inttypes.h>

#define choice 1

#if choice == 1
// Online C compiler to run C program for checking endianness using union

union check_endian
{
    unsigned int value;
    char r;
};

union check_endian endian;
  
int main(void)
{
    endian.value = 0x1;
 
    if (endian.r == 1) 
        printf("Your system is Little Endian\n");
    else
        printf("Your system is Big Endian\n");
    return 0;
}

#elif choice == 2

// Check little Endian or Big Endian

int main()
{
    int a = 1;
    char ptr = a;
    
    if(ptr)
    {
        printf("Little Endian");
    }
    else
    {
        printf("Big Endian");
    }
}

#elif choice == 3

// C code to implement the approach convert little endianness to big endianness using Union

union endianness
{
    uint32_t a;
    uint8_t var[4];
};

int main()
{
    union endianness e;
    
    e.a = 0x11223344;
    
    char temp = e.var[3];
    e.var[3] = e.var[0];
    e.var[0] = temp;
    
    temp = e.var[2];
    e.var[2] = e.var[1];
    e.var[1] = temp;
    
    printf("a = %x",e.a);
    //printf("var = %d",endian.var);
}

#else
int main() {
    printf("\nInvalid choice");
}
#endif