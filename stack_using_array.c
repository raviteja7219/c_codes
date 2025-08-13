// Online C compiler to run C program online for stack using arrays

#include <stdio.h>
#include <stdlib.h>

#define array_size 10

int array[array_size];
int stack_ptr = 0;

void push()
{
    int value;
    
    if (stack_ptr == array_size)
    {
        printf("Stack is FULL");
    }
    
    else
    {
        printf("Enter the value to Push");
        scanf("%d",&value);
        
        array[stack_ptr] = value;
        stack_ptr++;
    }
}

void pop()
{
    int ele;
    if (stack_ptr == 0)
        printf("Stack is Empty");
    else
    {
        printf("Element %d is poped",array[stack_ptr-1]);
        ele = array[stack_ptr-1];
        stack_ptr--;
    }
}

void display()
{
    if (stack_ptr == 0)
    {
        printf("Stack is Empty");
    }
    
    else
    {
        for (int ptr = 0; ptr<stack_ptr; ptr++)
        {
            printf("%d ",array[ptr]);
        }
    }
    
}

int main() 
{
    int ch;
    while(1)
    {
        printf("\nMenu\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        scanf("%d",&ch);
        if (ch==1)
            push();
        else if (ch==2)
            pop();
        else if (ch==3)
            display();
        else if (ch==4)
            exit(0);
        else
            printf("Enter correct option between 1 to 4");
    }
    
    return 0;
}