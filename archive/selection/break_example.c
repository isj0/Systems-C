#include <stdio.h>

void main() {

    for (int i = 1; i <= 10; i++) {

        if (i == 7) {
            break;
        }
        printf("%d\n", i);
    }
}