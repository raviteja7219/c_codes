// Online C compiler to run C program online for Queue using Array

#include <stdio.h>
#include <stdlib.h>

#define array_size 10

int array[array_size];
int front = 0;
int rear = 0;

void push()
{
    int value;
    
    if (rear == array_size)
    {
        printf("Queue is FULL");
    }
    
    else
    {
        printf("Enter the value to Push");
        scanf("%d",&value);
        
        array[rear] = value;
        rear++;
    }
}

void pop()
{
    int ele;
    if (rear == 0)
        printf("Queue is Empty");
    else
    {
        printf("Element %d is poped",array[front]);
        ele = array[front];
        for(int i=front; i<rear;i++)
        {
            array[i] = array[i+1];
        }
        rear--;
    }
}

void display()
{
    if (rear == 0)
    {
        printf("Queue is Empty");
    }
    
    else
    {
        int p = front;
        for (p = 0; p<rear; p++)
        {
            printf("%d ",array[p]);
        }
    }
    
}

int main() 
{
    int ch;
    while(1)
    {
        printf("\nMenu\n1.Push\n2.Pop\n3.Display\n4.Exit");
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