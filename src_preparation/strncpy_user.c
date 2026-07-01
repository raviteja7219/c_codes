// Online C compiler to run C program online for strncpy function

#include <stdio.h>
#include <string.h>

int strncpy_function(char s1[], char s2[], int n)
{
    
    for (int i=0, j=0, k=0; (s2[i] != '\0') && k<n; i++,j++,k++)
    {
        s1[j] = s2[i];
    }
    
    puts(s1);
    return 0;
}

int main()
{
  char s1[25] = "";
  char s2[15] = "My Name is Nani";
  
  strncpy_function(s1,s2,4);
  
  return 0;
}