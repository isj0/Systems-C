/* Display formatted first and last name */

#include <stdio.h>

int main(void) {

    char ch, initial;
    int space, len = 0;

    printf("Enter a first and last name: ");

    while ((ch = getchar()) != '\n') {

        len += 1;
        
        if (len == 1)
            initial = ch;
        
        if (ch == ' ') {
            space = len;
        }

        printf("%c", ch);

    }

    printf("%c\n", initial);

    return 0;
}