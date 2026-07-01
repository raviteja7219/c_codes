// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void last_insert()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    
    printf("Enter the data");
    scanf("%d",&(temp -> data));
    
    temp->next = NULL;
    
    if (head == NULL)
    {
        head = temp;
        
        printf("Head node inserted\n");
    }
    
    else
    {
        struct node *ptr = head;
        
        while (ptr -> next != NULL)
        {
            ptr = ptr->next;
        }
        
        ptr -> next = temp;
        printf("Node inserted\n");
    }
}

void begin_insert()
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    
    printf("Enter the data");
    scanf("%d",&(temp->data));
    
    temp -> next = head;
    head = temp;
    printf("This is the First Node from Now\n");
}

void middle_insert()
{
    struct node *ptr = head;
    
    if (ptr == NULL)
    {
        printf("Linked List is Empty and cannot insert in Middle");
    }
    
    else
    {
        int pos, count = 0;
        
        printf("Enter the position to Enter\n");
        scanf("%d",&pos);
        
        while (ptr != NULL)
        {
            count++;
            ptr = ptr->next;
        }
        
        printf("no. of nodes = %d\n",count);
        ptr = head;
        
        if (pos <= 1 || pos >= count+1)
        {
            printf("Cannot Enter in 1st position and Last Position");
        }
        
        else
        {
            struct node *temp = (struct node *)malloc(sizeof(struct node));
            
            printf("Enter the data\n");
            scanf("%d",&(temp->data));
            
            for (int i=0; i<pos-2; i++)
            {
                ptr = ptr->next;
            }
            
            temp -> next = ptr -> next;
            ptr -> next = temp;
        }
    }
    
}

void display()
{
    struct node *ptr = head;
    
    if (ptr == NULL)
    {
        printf("Linked List is EMPTY");
    }
    
    while (ptr != NULL)
    {
        printf("%d\t",ptr->data);
        ptr = ptr->next;
    }
}

void last_delete()
{
    if (head == NULL)
    {
        printf("Linked List is EMPTY");
    }
    
    else
    {
        struct node *ptr = head;
        struct node *ptr2 = head;
        
        ptr2 = head -> next;
        
        if (ptr2 == NULL)
        {
            free(ptr2);
            head = NULL;
            printf("Last node deleted");
        }
        
        else
        {
            while (ptr2 -> next != NULL)
            {
                ptr = ptr2;
                ptr2 = ptr2 -> next;
            }
    
            ptr->next = NULL;
            free(ptr2);
        }
    }
}

void middle_delete()
{
    int pos, count = 0;
    struct node *ptr = head;
    struct node *ptr2 = head;
    
    if (ptr == NULL)
    {
        printf("Linked list is Empty");
    }
    
    else
    {
        printf("Enter the position u want to delete");
        scanf("%d",&pos);
        
        while (ptr -> next != NULL)
        {
            count++;
            ptr = ptr -> next;
        }
        
        ptr = head;
        
        if (pos <= 1 || pos >= count+1)
        {
            printf("You cannot delete begin or end nodes");
        }
        
        else
        {
            for (int i=0;i<pos-1;i++)
            {
                ptr2 = ptr2 -> next;
            }
            for (int i=0; ptr -> next != ptr2; i++)
            {
                ptr = ptr -> next;
            }
            
            ptr -> next = ptr2 -> next;
            free(ptr2);
        }
    }
}

void begin_delete()
{
    struct node *ptr = head;
    
    if (ptr == NULL)
    {
        printf("Linked List is Empty");
    }
    else
    {
        head = head -> next;
        free(ptr);
    
        printf("First node deleted\n");
    }
}

void print_mid_node()
{
    int count = 0;
    struct node *ptr = head;
    
    if (ptr == NULL)
    {
        printf("Linked List is EMPTY");
    }
    
    else
    {
        while (ptr -> next != NULL)
        {
            count++;
            ptr = ptr->next;
        }
    
        ptr = head;
    
        for (int i=0;i<count/2;i++)
        {
            ptr = ptr->next;
        }
        printf("Mid node = %d",ptr->data);
    }
    
}

void print_ll_reverse(struct node *h)
{
    if (h == NULL)
    {
        printf("\n");
        return;
    }
    print_ll_reverse(h->next);
    printf("%d\t",h->data);
}

void reverse_linked_list()
{
    struct node *prev = NULL;
    struct node *current = head;
    struct node *later = NULL;
    
    if (current == NULL)
    {
        printf("Linked List is EMPTY");
    }
    
    else
    {
        while (current != NULL)
        {
            later = current -> next;
            current -> next = prev;
            prev = current;
            current = later;
        }
        head = prev;
    }
    
}

int main() 
{
    int ch;
	
	while(1)
	{
	    printf("\n Enter the option for linked list\n");
	    printf("\n1.last_insert\n2.begin_insert\n3.middle_insert\n4.display\n5.begin_delete\n6.last_delete\n7.middle_delete\n8.print_mid_node\n9.print_linked_list_reversely\n10.reverse_linked_list\n11.Exit");
	    scanf ("%d",&ch);
	    
	    switch(ch)
	    {
	        case 1: last_insert(); break;
	        case 2: begin_insert(); break;
	        case 3: middle_insert(); break;
	        case 4: display(); break;
	        case 5: begin_delete(); break;
	        case 6: last_delete(); break;
	        case 7: middle_delete(); break;
	        case 8: print_mid_node(); break;
	        case 9: print_ll_reverse(head); break;
	        case 10: reverse_linked_list(); break;
	        case 11: exit(0); break;
	        default: printf("Enter option between 1 t0 11\n");
	    }
	}
	
    return 0;
}