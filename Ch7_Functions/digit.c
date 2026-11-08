#include <stdio.h>

int digit(int n, int k);

int main(void) {

    int num, pos;
    printf("Enter a big number: ");
    scanf("%d", &num);
    printf("Now enter which digit you want: ");
    scanf("%d", &pos);

    printf("You choose: %d\n", digit(num, pos));

    return 0;
}

int digit(int n, int k) {

    int digit;
    int count = 0;

    while (n > 0) {
        digit = n % 10;
        count++;
        if (count == k) {
            return digit;
        }
        n /= 10;
    }

    return 0;

}