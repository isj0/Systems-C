/* Calculate the number of digits in a numbers */

#include <stdio.h>

int main(void)
{
    int num, count;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0 && num <= 9) count = 1;
    if (num > 10 && num <= 99) count = 2;
    if (num > 99 && num <= 999) count = 3;

    printf("The number has %d digits.\n", count);

    return 0;
}