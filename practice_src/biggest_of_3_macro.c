// MACRO to Find Biggest of 3 numbers.

#include <stdio.h>

#define MAX(x,y,z) ((x>=y && x>=z)? x:((y>=x && y>=z)? y: (z>=x && z>=y)? z : 0))

int main()
{
	int a=20,b=12,c=20,max;
	
	max=MAX(a,b,c);
	printf("Maximum number is: %d\n",max);
	
	return 0;
}