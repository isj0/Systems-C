/* Program to calculate the 200th triangular number 
    using a for statement */

#include <stdio.h>

int main(void) {

    int n, number, triangularNumber;

    printf ("What triangular number do you want? ");
    scanf ("%i", &number);

    triangularNumber = 0;

    for (n = 1; n <= number; n = n + 1) 
        triangularNumber = triangularNumber + n;
    
    printf("The triangular number of %i is %i\n", number, triangularNumber);

    return 0;
}