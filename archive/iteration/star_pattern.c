#include <stdio.h>
void main() {
    
    int n, row, space, star;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (row = 1; row <= n; row++) {

        for (space = 1; space <= n - row; space++) {

            printf(" ");
        }
        for (star = 1; star <= (2*row) - 1; star++) {
            printf("*");
        }
        printf("\n");
    }
}