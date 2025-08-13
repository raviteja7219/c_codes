// Online C compiler to run C program online for a number checking if it is Power of 4

#include <stdio.h>

int main() 
{
    int n=1;
    
    if ((n & n-1))
    {
        printf("%d is not a power of 4",n);
    }
    else
    {
        int count = 0,num = n;
        while((n&1) == 0)
        {
            count++;
            n = n>>1;
        }
        if (count % 2 == 0)
        {
            printf("%d is power of 4",num);
        }
        else
        {
            printf("%d is not power of 4",num);
        }
    }

    return 0;
}

