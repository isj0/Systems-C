#include <stdio.h>

void main() {

    char ch;

    // this will run 256 times ( 1 - 127 then to -128)
    // for (ch = 1; ch; ch++) {
    //     printf("%d\n", ch);
    // }

    // this will run infinite times
    // for (ch = 1; ch; ch = ch + 2) {
    //     printf("%d\n", ch);
    // }

    // this will run log2 + 1 times
    // for (int i = 1; i <= 100; i = i * 2) {
    //     printf("%d\n", i);
    // }

    // factorial example
    // int fac = 1;
    // for (int i = 1; i <= 5; i++) {
    //     fac = fac * i;
        
    // }
    // printf("%d\n", fac);

    // power function examples
    // int pow = 1;
    // for (int i = 1; i <= 3; i++) {
    //     pow = pow * 4;
        
    // }
    // printf("%d\n", pow);

    for (int i = 1; i <= 11; i = i + 2) {
        printf("Hello\n");
        
    }
}