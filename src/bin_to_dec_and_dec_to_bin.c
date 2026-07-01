// Online C compiler to run C program online for Binary to Decimal

#include <stdio.h>
#include <math.h>

//#define BIN_TO_DEC

#ifdef BIN_TO_DEC
int main() 
{

    int bin = 0x80;
    int dec = 0;
    int rem = 0;
    int i = 0;
    
    while (bin>0)
    {
        rem = bin & 1;
        dec = dec + (rem * pow(2,i));
        i++;
        bin = bin >> 1;
    }
    
    printf("Decimal Value = %d",dec);
    return 0;
}

#else
// Online C compiler to run C program online for DECIMAL to BINARY Conversion

int main() 
{

    int dec = -64;
    int a[32];
    int i=0;
    
    while (dec != 0 && i<=31)    
    {    
        a[i] = dec & 1;    
        dec = dec >> 1;
        i++;
    }    

    printf("\nBinary of Given Number is = ");    
    
    for(i=i-1;i>=0;i--)    
    {    
        printf("%d",a[i]);    
    }    

return 0;  

}
#endif
