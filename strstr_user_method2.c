#include <stdio.h>
#include <string.h>

char *strstr_function(char s1[], char s2[])
{
    int len = strlen(s1);
    int len2 = strlen(s2);
    int count = 0;
    char *ptr = NULL;
    
    for (int i=0;i<len2;i++)
    {
        for (int j=0;j<len;j++)
        {
            if (s2[i] != s1[j])
            {
                count = 0;
                ptr = NULL;
                continue;
            }
            else
            {
                int m = i;
                int n = j;
                
                ptr = (s1+n);
                
                while(m<len2)
                {
                    if (s2[m] == s1[n])
                    {
                        count = count + 1;
                    }
                    else
                    {
                        count = 0;
                        ptr = NULL;
                        break;
                    }
                    m++;
                    n++;
                }
                
                
            }
            printf("count = %d\n\n",count);
            if (count == len2)
            {
                printf("String 2 is in String 1\n");
                return ptr;
            }
            else
            {
                printf("String 2 is not in String 1");
            }
        }
    }
}

int main() 
{
    char s1[] = "Ravitviteja";
    char s2[] = "it";
    
    char *ptr = strstr_function(s1,s2);
    
    if (ptr != NULL)
        printf("Index Position = %d\n",ptr-s1);
    
    return 0;
}