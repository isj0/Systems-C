/* Counts the number of vowels */

#include <stdio.h>
#include <ctype.h>

int main(void) {

    int vowels = 0;
    char ch;

    printf("Enter a sentence: ");
    
    while ((ch = getchar()) != '\n') {
        ch = toupper(ch);

        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            vowels += 1;
    }

    printf("Your sentence contains %d vowels.\n", vowels);

    return 0;
}