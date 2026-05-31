#include <stdio.h>

int arithmetic (int x, int y) {
    int result;
    result = x * y;
    return result;
}
void main() {

    int a = 10, b = 25;

    int ans = arithmetic(a, b);
    printf("%d", ans);
}