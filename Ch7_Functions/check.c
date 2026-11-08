#include <stdio.h>

int check (int x, int y, int n);

int main(void) {

    int a  = 0.5, b = 2, c = 3;

    printf("%d\n", check(a,b,c));

    return 0;
}

int check (int x, int y, int n) {
    
    return (x >= 0 && x <= n - 1 && y >= 0 && y <= n - 1);
}