// The program calculates the factorial of a number

#include <stdio.h>

int main(void) {

    int n, fact = 1;

    printf("Enter a number: ");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("The factorial of %i is %i\n", n, fact);

    return 0;
}