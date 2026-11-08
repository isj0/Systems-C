/* Using arrays are parameters and arguments */

#include <stdio.h>

#define LEN 100

int sum_array(int a[], int n);

int main(void) {

    int b[] = {2, 3, 4, 5, 6};

    int total;
    total = sum_array(b, 5);

    printf("Sum of the array is %d\n", total);

    return 0;
}

int sum_array(int a[], int n) {
    int i, sum = 0;

    for (i = 0; i < n; i++) {
        sum += a[i];
    }

    return sum;
}