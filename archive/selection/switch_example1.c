#include <stdio.h>

void main() {

    /**
     * Only one of the cases will execute
     * 
     * switch (expression) {
     *  case 1: code 1; break;
     *  case 2: code 2; break;
     *  case 3: code 3; break;
     *  default: code 4; break
     * }
     */

    // expression in switch - any expression results in an integer
    // Falling through cases example
    // case ordering not important 
    // default case :- is optional
    // position of default :- is optional
    // case labels cannot be variables

    int i = 2;

    switch(i + 1) {
        
        case 4: printf("4\n"); break;

        case 3: printf("3\n");

        case 204: printf("20\n");

        default: printf("0\n"); break;
    }
}