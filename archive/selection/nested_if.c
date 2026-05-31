#include <stdio.h>

void main() {
    
    int a = 10;
    int b = 6;
    int c = 9;

    if (a > b && a > c) {
        printf("%d is largest\n", a);

        if (b > a && b > c) {
           printf("%d is largest\n", b); 
        }
        if (c > a && c > b) {
           printf("%d is largest\n", c); 
        }
        
    }

}