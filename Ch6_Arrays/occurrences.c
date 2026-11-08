/* Check numbers for repeated digits */

#include <stdio.h>
#include <stdbool.h>

int main() {

    bool digit_seen[10] = {false};
    int digit;
    long n;
    int num[10] = {};
    int occur = 0;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        occur = 0;
        digit = n % 10;
        
        if (digit_seen[digit])
            occur++;
           
        digit_seen[digit] = true;
        occur++;

        num[digit] = occur;

        n /= 10;
    }

    printf("Digit:\t\t");
    
    for (int i = 0; i < 10; i++) {
        printf("%3d", i);
    }

    printf("\nOccurrences:\t");

    for (int i = 0; i < 10; i++) {
        printf("%3d", num[i]);
    }

    printf("\n");

    return 0;
}