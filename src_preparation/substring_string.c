// This program is to find the substring inside main string

#include <stdio.h>
#include <string.h>

int main(void) {
    
    char main_s[] = "ravi teja is a good boy";
    char sub_s[]  = " a go";

    int len_ms = strlen(main_s);
    int len_ss = strlen(sub_s);

    int found = 0;

    if (len_ss > len_ms) {
        printf("Substring is larger than main string\n");
        return 0;
    }

    // This checks from 0 to max index value that the substring can start with
    
    for (int i = 0; i <= len_ms - len_ss; i++) {
        int j;

        for (j = 0; j < len_ss; j++) {
            if (main_s[i + j] != sub_s[j])
                break;
        }

        if (j == len_ss) {
            printf("Substring found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Substring not found\n");

    return 0;
}

