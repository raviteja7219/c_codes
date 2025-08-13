// Online C compiler to run C program online for ARRAY OF STRUCT POINTERS

#include <stdio.h>
#include <string.h>

struct node
{
    int roll;
    float percent;
};

int main() 
{
    struct node s[3];
    struct node *ptr[3];
    for (int i=0;i<3;i++)
    {
        ptr[i] = &s[i];
    }
    s[0].roll = 2;
    s[0].percent = 91.23;
    ptr[1]->roll = 3;
    ptr[1]->percent = 92.23;
    ptr[2]->roll = 4;
    ptr[2]->percent = 93.23;

    printf("%d\n",(ptr[0]->roll));
    printf("%f\n",(ptr[0]->percent));
    printf("%d\n",(ptr[1]->roll));
    printf("%f\n",(ptr[1]->percent));
    printf("%d\n",(ptr[2]->roll));
    printf("%f\n",(ptr[2]->percent));
    
    return 0;
}