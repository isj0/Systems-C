#include <stdio.h>

void main() {

    int x = 10;
    int *p;         // address of variable a;
    int **q;
    p = &x;
    q = &p;

    printf("%u\n", x);
    printf("%u\n", &x);
    printf("%u\n", p);
    printf("%u\n", *p);
    printf("%u\n", q);
    printf("%u\n", &p);
    printf("%u\n", *q);
}