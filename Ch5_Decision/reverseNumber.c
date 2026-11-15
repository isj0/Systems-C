// Program to reverse a number

#include <stdio.h>

int main(void) {

    int number, right_digit, reverse = 0;

    printf("Enter a number: ");
    scanf("%i", &number);

    do {
        right_digit = number % 10;
        reverse += right_digit;
        reverse *= 10;
        number /= 10;
    } while (number != 0);

    printf("Reversed number: %i\n", reverse);


    return 0;
}