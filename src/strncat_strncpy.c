// Online C compiler to run C program strncat and strncpy online

#include <stdio.h>
#include <string.h>

int main() {
    // Write C code here
    int n;
    
    char char1[25] = "Virat Kohli ";
    char char2[15] = "is the King";
    
    strncat(char1,char2,9);
    puts(char1);
    
    strncpy(char1,char2,9);
    puts(char1);

    return 0;
}