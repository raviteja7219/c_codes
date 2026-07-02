/* This program deals with logics of strings and it's reversals

1. Given string                      - Raviteja is a good boy
2. String Reversal                   - yob doog a si ajetivaR
3. Word Reversal of given string     - boy good a is Raviteja
4. Word Reversal to String Reversal  - ajetivaR si a doog yob

*/

#include <stdio.h>
#include <string.h>

#define choice 1

void reverse(char s[], int i, int j)
{
    char temp;
    while(i<j)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}

#if choice==1
int main() {
    char str[] = "Raviteja is a good boy";
    int i=0,j=0;
    int size = strlen(str);
    
    reverse(str, i, size-1);
    printf("String reversal : %s\n",str);
    
    for(i=0,j=0; i<=size; i++)
    {
        if (str[i] == ' ' || str[i] == '\0'){
            reverse(str, j, i-1);
            j = i+1;
        }
    }
    printf("Word Reversal : %s\n",str);
    
    return 0;
}

#elif choice == 2
int main() {
    char str[] = "Raviteja is a good boy";
    int i=0,j=0;
    int size = strlen(str);
    
    for(i=0,j=0; i<=size; i++)
    {
        if (str[i] == ' ' || str[i] == '\0'){
            reverse(str, j, i-1);
            j = i+1;
        }
    }
    printf("Word Reversal to String Reversal : %s\n",str);
    
    return 0;
}

#endif

