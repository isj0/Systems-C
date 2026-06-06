/* Prints a table of squares using a for statement */

#include <stdio.h>

int main(void) {

    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    i = (short) i;

    for (i = 1; i <= n; i++) {
        printf("%10hd%20hd\n", i, i * i);
    }



    return 0;
}