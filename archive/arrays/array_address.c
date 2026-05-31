#include <stdio.h>

void main() {

    int a[4] = {1, 2, 3, 4};
    printf("Address of array == %u\n", a);
    printf("Address the first element of array == %u\n", &a[0]);
    printf("Address of the complete array == %u\n", &a);
}