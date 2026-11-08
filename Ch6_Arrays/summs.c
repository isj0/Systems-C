/* This program reads 5x5 arrays of integers and 
    prints the rows sums and column sums */

#include <stdio.h>
#define N 5

int main(void) {

    int arr[N][N];
    int r_sums[N] = {0};
    int c_sums[N] = {0};

    for (int i = 0; i < 2; i++) {
        printf("Enter row %d: ", i + 1);

        for (int j = 0; j < N; j++) {
            scanf("%d", &arr[i][j]);
            r_sums[i] += arr[i][j];
            c_sums[j] += arr[i][j];
        }
        

        printf("\n");
    }

    printf("Row totals: ");
    for (int i = 0; i < N; i++) {
        printf(" %d ", r_sums[i]);
    }

    printf("\n");

    printf("Columns totals: ");
    for (int i = 0; i < N; i++) {
        printf(" %d ", c_sums[i]);
    }

    printf("\n");

    return 0;
}