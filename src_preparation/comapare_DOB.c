// Online C compiler to run C program online for comparing 2 DOBs

#include <stdio.h>

int main()
{
    int d1,d2,m1,m2,y1,y2;
    
    printf("Give First DOB of birth in the form of DD-MM-YYYY\n");
    scanf("%d-%d-%d",&d1,&m1,&y1);
    
    printf("\nGive Second DOB of birth in the form of DD-MM-YYYY\n");
    scanf("%d-%d-%d",&d2,&m2,&y2);
    
    printf("\n1st DOB is %d-%d-%d\n",d1,m1,y1);
    printf("\n2nd DOB is %d-%d-%d",d2,m2,y2);
    
    printf("\n\n");
    
    if (y1<y2)
        printf("1st Person is Elder");
    
    else if (y1>y2)
        printf("2nd Person is Elder");
    
    else
    {
        if (m1<m2)
            printf("1st Person is Elder");
    
        else if (m1>m2)
            printf("2nd Person is Elder");
        
        else
        {
            if (d1<d2)
                printf("1st Person is Elder");
    
            else if (d1>d2)
                printf("2nd Person is Elder");
            
            else
                printf("Both Born on Same Day");
        }
    }
    
}