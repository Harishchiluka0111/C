#include<stdio.h>

int main() {
    int i = 1;
    char *p = (char *)&i;

    if (p[0] == 1)
        printf(" LITTLE_ENDIAN ");
    else
        printf("BIG_ENDIAN");
}

