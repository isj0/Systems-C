#include <stdio.h>

void main() {

    int b;
    printf("Enter a number: ");
    scanf("%d", &b);
    (b & 1) ? printf("ODD") : printf("Even");
}