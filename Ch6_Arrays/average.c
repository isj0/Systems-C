#include <stdio.h>

int main(void) {

    float arr1[5] = {1.141, 2.718, 3.141, 7, 11.11};
    float arr2[5] = {1.141, 3.14159};
    float sum = 0;

    for (int i = 0; i < 5; ++i) {
        sum += arr1[i];
    }

    printf("The average = %f\n", sum/5);


    return 0;
}