#include <stdio.h>

void main() {

    char *p;
    int x = 300;
    p = (char*)&x;

    printf("%u\n", *p);

}