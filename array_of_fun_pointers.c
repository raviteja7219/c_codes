// Online C compiler to run C program online for ARRAY OF FUNCTION POINTERS


#include <stdio.h>
#include <string.h>

void add(int a, int b)
{
    printf("This is add function and value is %d\n",a+b);
}

void sub(int a, int b)
{
    printf("This is sub function and value is %d\n",a-b);
}

void mul(int a, int b)
{
    printf("This is mul function and value is %d\n", a*b);
}

int main() 
{
    int ch = 0;
	int a = 12, b = 2;
    void (*fun_ptr[])(int, int) = {add,sub,mul};
    
    (*fun_ptr[ch])(a,b);
    return 0;
}