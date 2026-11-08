// Round off an integer to the next largest even multiple

#include <stdio.h>

int main(void) {
    
    int i = 256, j = 7;
    
    int next_multiple = i + j - i % j;

    printf("The next largest even multiple of %i after %i is = %i\n", j, i, next_multiple);

    i = 356, j = 7;
    
    next_multiple = i + j - i % j;

    printf("The next largest even multiple of %i after %i is = %i\n", j, i, next_multiple);

    i = 12258, j = 23;
    
    next_multiple = i + j - i % j;

    printf("The next largest even multiple of %i after %i is = %i\n", j, i, next_multiple);

    i = 996, j = 4;
    
    next_multiple = i + j - i % j;

    printf("The next largest even multiple of %i after %i is = %i\n", j, i, next_multiple);

    return 0;
}