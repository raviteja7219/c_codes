// Logic to reverse the words of a string

#include <stdio.h>
#include <string.h>

void reverse (char s[], int i, int j) {
    char temp;
    while (i < j) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char str[] = "I Ravi Teja from Vijayawada of Andhra";
    int i=0, j=0;
    int size = strlen(str);
    
    reverse(str, i, size-1);
    
    for (i=0,j=0; i<=size; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverse(str,j,i-1);
            j=i+1;
        }
    }
    printf("%s",str);

    return 0;
}
