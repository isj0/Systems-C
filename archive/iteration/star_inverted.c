#include <stdio.h>

void main() {

    int n, row, space, star;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (row = 1; row <= n; row++) {

        for (space = 1; space <= row - 1; space++) {
            printf(" ");
        }

        for (star = 1; star <= (2 * ((n+1)  - row) - 1); star++) {
            printf("*");
        }

        printf("\n");
    }
}