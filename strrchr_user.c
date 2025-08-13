// Online C compiler to run C program online for user function strrchr

#include <stdio.h>
#include <string.h>

char *strrchr_function(char search[], char var)
{
    int len = strlen(search);
	char *last_occurance = NULL;
    int i;
    
    for (i=0;i<len;i++)
    {
        if (search[i] == var)
        {
			last_occurance = search + i;
        }
    }
	if (last_occurance)
		printf("Character found\n");
	else
		printf("Character not found\n");
	
	return (last_occurance);
}

int main() {
    // Write C code here
    int n;
    
    char char1[20] = "Ravi Teja ";
    char char2 = 'i';
    
    char *ptr = strrchr_function(char1,char2);
    printf("char is at index %d",ptr-char1);

    return 0;
}