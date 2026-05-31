#include <stdio.h>
void main() {
    
    for (int row = 1; row <= 5; row++) {
        for (int col = 1; col <= 6 - row; col++) {
            printf("%d", col);
        }
        printf("\n");
    }
}