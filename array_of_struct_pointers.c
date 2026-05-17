// Online C compiler to run C program online for ARRAY OF STRUCT POINTERS

#include <stdio.h>
#include <string.h>

struct node
{
    int roll;
    float percent;
    char name[20];
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
    strcpy(s[0].name, "Raviteja");
    ptr[1]->roll = 3;
    ptr[1]->percent = 92.23;
    strcpy(ptr[1]->name, "Ravish");
    ptr[2]->roll = 4;
    ptr[2]->percent = 93.23;
    strcpy(ptr[2]->name, "Tejesh");

    printf("%d\n",(ptr[0]->roll));
    printf("%f\n",(ptr[0]->percent));
    printf("%s\n",(ptr[0]->name));
    printf("%d\n",(ptr[1]->roll));
    printf("%f\n",(ptr[1]->percent));
    printf("%s\n",(ptr[1]->name));
    printf("%d\n",(ptr[2]->roll));
    printf("%f\n",(ptr[2]->percent));
    printf("%s\n",(ptr[2]->name));
    
    return 0;
}
