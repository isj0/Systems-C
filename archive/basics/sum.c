#include <stdio.h>

void main() {

    int x, y;
    
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("Enter a second number: ");
    scanf("%d", &y);

    printf("Sum of %d + %d = %d\n", x, y, x+y);

}