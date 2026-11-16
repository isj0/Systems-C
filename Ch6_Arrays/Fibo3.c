#include <stdio.h>

int main(void) {

    int n1 = 0;
    int n2 = 1;
    int current = n1;

    for (int i = 0; i < 15; ++i) {
        printf("%i  ", current);
        n1 = n2;
        n2 = current;
        
        current = n1+n2;
        
    }

    printf("\n");
}