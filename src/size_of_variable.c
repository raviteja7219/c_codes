// Online C compiler to run C program online for size of a variable

#include <stdio.h>

#define my_sizeof(t) (char *)(&t+1)-(char*)(&t) 

int main() 
{ 
	double y; 
	printf("%ld", my_sizeof(y)); 
	return 0; 
}