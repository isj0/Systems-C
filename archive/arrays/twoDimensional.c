#include <stdio.h>

void main() {

    int a[2][3] = {10, 20, 20, 40, 50, 60};

    printf("%d\n", a);
    printf("%d\n", a[0]);
    //printf("%d\n", a[0][0]);
    printf("%d\n", &a);
    // printf("%d\n", &a+1);
    // printf("%d\n", a+1);
    // printf("%d\n", a[0]+1);
}