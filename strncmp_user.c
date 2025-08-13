// Online C compiler to run C program online for strncmp function i.e. comparing upto an index n

#include <stdio.h>

int strncmp_function(char s1[], char s2[], int n)
{
    
    for (int i=0, j=0; (s1[i] != '\0' && s2[j] != '\0') && i < n; i++,j++)
    {
        if (s1[i] == s2[j])
            continue;
        else
        {
            printf("Both strings are not equal");
            return 0;
        }
    }
    
    printf("Both strings are equal");
    return 1;
}

int main()
{
  char s1[25] = "My name is Nani";
  char s2[15] = "My name is Nani";
  
  strncmp_function(s1,s2,4);
  
  return 0;
}