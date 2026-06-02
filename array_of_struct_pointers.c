// Online C compiler to run C program online for ARRAY OF STRUCT POINTERS
// Instead of using scanf("%s",e[i].name) for runtime input, usage of strcpy(e[i].name, "Raviteja") can be used for compile time input

#include <stdio.h>
#include <string.h>

#define ARRAY_SIZE 3

struct emp
{
    char name[20];
    int num;
};

int main() {
    struct emp e[ARRAY_SIZE];
    struct emp *eptr[ARRAY_SIZE];
    
    for (int i=0;i<ARRAY_SIZE;i++)
    {
        printf("Enter Employee %d name\n",i+1);
        scanf("%s",e[i].name);
        printf("Enter Employee %d num\n", i+1);
        scanf("%d",&e[i].num);
        
        eptr[i] = &e[i];
    }
    
    for (int i=0;i<ARRAY_SIZE;i++)
    {
        printf("Employee %d name is %s\n",i+1, eptr[i]->name);
        printf("Employee %d Num is %d\n",i+1, eptr[i]->num);
    }
    
    return 0;
}

