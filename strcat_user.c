// Online C compiler to run C program online for strcat function

#include <stdio.h>
#include <string.h>

void strcat_function(char s1[], char s2[])
{
    int len = 0;
    for (int i = 0; s1[i] != '\0';i++)
    {
        len++;
    }
    
    for (int i=len, j = 0; s2[j] != '\0'; i++,j++)
    {
        s1[i] = s2[j];
    }
    
    puts(s1);
}

int main()
{
  char s1[36] = "My name is Nani";
  char s2[20] = "My name is Baahubali";
  
  strcat_function(s1,s2);
  
  return 0;
}