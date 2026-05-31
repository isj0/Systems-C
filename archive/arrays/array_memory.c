#include <stdio.h>

void main() {

    int a[4] = {10, 20, 20, 40};
    // printf("%d\n", ++a[0]);
    // printf("%d\n", a);
    // printf("%d\n", a+1);
    // printf("%d\n", &a[1]);
    // printf("%d\n", &a[2]);
    // printf("%d\n", *(a));
    // printf("%d\n", *(a+1));
    // printf("%d\n", *(a+2));

    printf("%d\n", a[2]);
    printf("%d\n", 2[a]);
    printf("%d\n", *(a + 2));
    printf("%d\n", *(2+a));
}