/* This BIFF filter reads a message entered by the user 
    and translates it to BIFF communique */

#include <stdio.h>
#include <ctype.h>

int main(void) {

    char msg[80];
    char biff[80];
    char ch;
    int len = 0;

    printf("Enter message: ");

    ch = getchar();

    while (ch != '\n') {
        msg[len] = ch;
        len++;
        ch = getchar();
    }

    for (int i = 0; i < len; i++) {

        char temp = toupper(msg[i]);

        if (temp == 'A')
            temp = '4';
        else if (temp == 'B')
            temp = '8';
        else if (temp == 'E')
           temp = '3';
        else if (temp == 'O')
            temp = '0';
        else if (temp == 'S')
            temp = '5';
        else if (temp == 'I')
            temp = '1';

        biff[i] = temp;
    }

    for (int i = len; i < len + 10; i++) {
        biff[i] = '!';
    }

    biff[len + 10] = '\0';
    
    printf("In BIFF-speak: %s\n", biff);

    printf("\n");

    return 0;
}