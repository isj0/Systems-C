/* Generate a checker board using loops & arrays */

#include <stdio.h>

#define rows 8
#define cols 8

int main(void) {

    char board[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if ((i + j) % 2 == 0)
                board[i][j] = 'B';
            else
                board[i][j] = 'R';
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf(" %c", board[i][j]);
        }

        printf("\n");
    }

    return 0;
}
