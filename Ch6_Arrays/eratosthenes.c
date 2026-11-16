#include <stdio.h>
#include <stdbool.h>


int main(void) {

    int i, n = 150;
    int P[151];
    bool isPrime;
    
    // Initializing Arrays
    for (i = 2; i <= n; ++i) {
        P[i] = 0;
    }
    
    i = 2;
    // Main loop
    for (i; i <= n; ++i) {
        if (P[i] == 0) {
            printf("%i  ", i);
            for ( int j = 2; i*j <= 150; ++j) {
                P[i*j] = 1;
            }
        }
    }
    
    printf("\n");

    return 0;
}