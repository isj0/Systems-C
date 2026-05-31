#include <stdio.h>
void main() {

    int n, row, col;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (row = 1; row <= n; row++) {
        for (col = 1; col <= (n+1) - row; col++) {
            printf("%d", col);
        }
        printf("\n");
    }
}