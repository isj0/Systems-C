/* Check numbers for repeated digits */

#include <stdio.h>
#include <stdbool.h>

int main() {

    bool digit_seen[10] = {false};
    int digit;
    long n, num;

    

    do {
        printf("Enter a number: ");
        scanf("%ld", &n);

        if (n == 0)
            break;

        num = n;

        while (num > 0) {
            digit = num % 10;
            if (digit_seen[digit])
                break;
            digit_seen[digit] = true;
            num /= 10;
        }

        if (num > 0)
            printf("Repeated digit\n");
        else
            printf("No repeated digits\n");

    } while (true);


    return 0;
}