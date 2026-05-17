// pragma directive usage for avoiding structure padding 

#include <stdio.h>
#pragma pack(1)

struct emp
{
    char code;
    int id;
};

int main()
{
    struct emp s;
    printf("Size of structure = %d bytes", sizeof(s));
    return 0;
}
