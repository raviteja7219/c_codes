// ifdef, ifndef, if, elif and else ladder of pre-processor

#include <stdio.h>

#define t 2

int main()
{
    #ifdef a
        printf("a is defined\n");
    #else
        printf("a is not defined\n");
    #endif
    
    #ifndef b
        printf("b is not defined\n");
    #else
        printf("b is defined\n");
    #endif
    
    #ifdef t
        #if t==1
            printf("t = 1");
        #elif t==2
            printf("t = 2");
        #else
            printf("t is neither 1 nor 2");
        #endif
    #else
        printf("t is not defined");
    #endif
    
    return 0;
}
