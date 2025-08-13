// Online C compiler to run C program for bitwise question using pre-processors

#include <stdio.h>

#define choice 7

#if choice == 1
#define convert(value) ((0x000000ff & value) << 24) | ((0x0000ff00 & value) << 8) | \
                       ((0x00ff0000 & value) >> 8) | ((0xff000000 & value) >> 24)

int main(void)
{
    int value = 0x11223344;
    int converted = 0;

    printf("Value Before Converting = 0x%x\n", value);

    converted = convert(value);

    printf("Value After Converting = 0x%x\n", converted);
    return 0;
}

// **************************************************************************************************************

#elif choice == 2

// C code to implement the approach reversal of bits

int main()
{
    int data = 0xff;
    for (int i=0,j=31;i<j;i++,j--)
    {
        if ((data & (1<<j)) != (data & (1<<i)))
        {
            data = data ^ (1<<i);
            data = data ^ (1<<j);
        }
        else
            continue;
    }
    printf("%x",data);

    return 0;
}

// **************************************************************************************************************

#elif choice == 3
// C code to implement the approach rotating the bits

#define rotate_left(data,pos) (data<<pos)|(data>>(32-pos))
#define rotate_right(data,pos) (data>>pos)|(data<<(32-pos))

int main()
{
    int data = 128;
    int pos = 2;

    printf("\nrotate = %d",rotate_left(data,pos));
}

// **************************************************************************************************************

#elif choice == 4

// Swap the odd and even positions

int main()
{
    unsigned int data = 128;
    int a = ((data & 0xAAAAAAAA)>>1)|((data & 0x55555555)<<1);
    printf("\nvalue = %d", a);
    return 0;
}

// **************************************************************************************************************

#elif choice == 5

// Convert little Endian to Big Endian

int main()
{
    unsigned int data = 0x12345678;
    unsigned int a = ((data & 0x000000FF)<<24 | (data & 0xFF000000)>>24) |
        ((data & 0x00FF0000)>>8 | (data & 0x0000FF00)<<8);
    printf("\nvalue = %x", a);
}

// **************************************************************************************************************

#elif choice == 6

// Online C compiler to run C program online for swapping of 2 bits

int main() 
{
    int n = 0x11111111;
    int pos1 = 31;
    int pos2 = 0;
    
    int final_value;
    int n1 = (n>>pos1)&1;
    int n2 = (n>>pos2)&1;
    
    if (n1 == n2)
    {
        printf("Swapping Result = %x\n",n);
        printf("Here, there is no need of Swapping as both bits have same value\n");
    }
    else
    {
        final_value = n ^ (1<<pos1);
        final_value = final_value ^ (1<<pos2);
        
        printf("Swapping Result = %x\n",final_value);
        
    }
    return 0;
}

// **************************************************************************************************************

#else

int main() {
    printf("Enter correct choice\n");
}

#endif
