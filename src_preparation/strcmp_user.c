// Online C compiler to run C program online for strcmp function

#include <stdio.h>
#include <string.h>

int strcmp_function(char s1[], char s2[])
{
    
    for (int i=0, j=0; (s1[i] != '\0' && s2[j] != '\0'); i++,j++)
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
  char s1[36] = "My name is Nani";
  char s2[20] = "My name is Nani";
  
  strcmp_function(s1,s2);
  
  return 0;
}
