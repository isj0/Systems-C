/* Check for repeated digits and print them */

#include <stdio.h>
#include <stdbool.h>

int main(void) {

    bool digit_seen[10] = {false};
    int digit, counter = 0;
    long n;
    int rep_digits[10] = {};

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit]) {
            rep_digits[counter] = digit;
            counter++;
        }
            
        digit_seen[digit] = true;
        n /= 10;
    }

    if (counter > 0) {
        printf("Repeated digit (s): ");
        for (int i = 0; i < counter; i++) {
            printf(" %d", rep_digits[i]);
        }
        printf("\n");
    }

    else
        printf("No repeated digits\n");

    return 0;
}