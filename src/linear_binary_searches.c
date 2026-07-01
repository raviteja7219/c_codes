#include <stdio.h>
//#define linear

#ifdef linear
// Online C compiler to run C program online for Linear Search

int main() 
{
    int a[15] = {3,9,2,8,5,14,27,55,32,92,114,623,22,474,583};
    int ele = 583, flag = 0;
    
    for (int i=0;i<15;i++)
    {
        if (a[i] == ele)
        {
            printf("Element %d is found by linear search",ele);
            flag = 1;
        }
    }
    if (!flag)
    {
        printf("Element %d is not found by linear search",ele);
    }
}

#else
	
// Online C compiler to run C program online for Binary Search

int main() 
{
    int a[15] = {3,9,2,8,5,14,27,55,32,92,114,623,22,474,583};
    int ele = 51;
    int flag = 0;
    int low = 0;
    int high = 14;
    int mid;
    
    for (int i=0;i<14;i++)
    {
        for (int j=i+1;j<15;j++)
        {
            if (a[i] > a[j])
            {
                a[i] = a[i] + a[j];
                a[j] = a[i] - a[j];
                a[i] = a[i] - a[j];
            }
        }
    }
    
    while (low <= high)
    {
        mid = (low+high)/2;
        if (a[mid]>ele)
        {
            high = mid-1;
        }
        else if (a[mid]<ele)
        {
            low = mid+1;
        }
        else
        {
            printf("Element %d is found in the array by binary search\n",ele);
            flag = 1;
            break;
        }
    }
    
    for (int i=0;i<15;i++)
        printf("%d ",a[i]);
    
    if(!flag)
    {
        printf("\nElement %d is not found in the array by binary search.\n",ele);
    }
    
    return 0;
}
#endif