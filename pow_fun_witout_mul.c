// Online C compiler to run C program for power function without using multiplication

#include <stdio.h>

int main() 
{
    int a=6,b=4;
    if (b==0)
    {
        printf("power = 1");
    }
    else
    {
        int inc = a;
        int ans = a;
        
        for (int j=1;j<b;j++)
        {
            for (int i=1;i<a;i++)
            {
                ans = ans + inc;
            }
            inc = ans;
        }
        
        printf("answer = %d",ans);
    }
    return 0;
}