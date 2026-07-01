// Online C compiler to run C program online for strcpy function

#include <stdio.h>
#include <string.h>

int strcpy_function(char s1[], char s2[])
{
    
    for (int i=0, j=0; (s2[i] != '\0'); i++,j++)
    {
        s1[j] = s2[i];
    }
    
    puts(s1);
    return 0;
}

int main()
{
  char s1[25] = "";
  char s2[20] = "My Name is Nani";
  
  strcpy_function(s1,s2);
  
  return 0;
}