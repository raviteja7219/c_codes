// if, elif and else ladder of pre-processor

#include <stdio.h>

#define t 2

int main()
{
    #if t==1
        printf("t = %d",t);
    #elif t==2
        printf("t = %d",t);
    #else
        printf("t is not 1");
    #endif
    return 0;
}
