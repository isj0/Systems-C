/* Find the largest and the smallest of four integers */

#include <stdio.h>

int main(void) {

    int a, b, c, d, min, max;

    printf("Enter 4 integers separated by space: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    max = min = a;
    if (b > max) max = b;
    if (b < min) min = b;

    if (c > max) max = c;
    if (c < min) min = c;

    if (d > max) max = d;
    if (d < min) min = d;

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);

    return 0;
}