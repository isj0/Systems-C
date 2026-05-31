#include <stdio.h>

void fun() {
    int a = 0;
    static int b = 10;
    ++a;
    ++b;
    printf("%d %d\n", a, b);
}
void main() {

    int a = 100;

    fun();
    fun();
    
    ++a;
    //++b;
    printf("%d\n", a);
}
