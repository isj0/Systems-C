/* Reverse a series of numbers using a variable length array - VLA */
/* The lenght of VLA is computed when the program is executed not when its compiled */

#include <stdio.h>

int main(void) {

    int i, n;

    printf("How many numbers do you want to reverse? ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d numbers: ", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Now in reverse order: ");
    
    for (i = n - 1; i >= 0; i--) {
        printf(" %d", a[i]);
    }
    printf("\n");

    return 0;
}