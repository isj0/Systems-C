/* Adds two fractions */

#include <stdio.h>

int main(void) {

    int num1, denom1, num2, denom2, result_num, result_denom;
    char op;

    printf("Enter first fraction: ");
    scanf("%d/%d", &num1, &denom1);

    printf("Enter second fraction: ");
    scanf("%d/%d", &num2, &denom2);

    printf("Now enter the operation you want to perform: \n");
    printf("\t1.Enter + for Addition: ");
    printf("\t2.Enter - for Substraction: ");
    printf("\t3.Enter * for Multiplication: ");
    printf("\t4.Enter / for Division: ");
    scanf("%c", op);

    if (op == '+') {
        result_num = num1 * denom2 + num2 * denom1;
        result_denom = denom1 * denom2;
    }
    else if (op == '-') {
        result_num = num1 * denom2 - num2 * denom1;
        result_denom = denom1 * denom2;
    }
    else if (op == '*') {
        result_num = num1 * num2;
        result_denom = denom1 * denom2;
    }
    else if (op == '/') {
        result_num = num1 * denom2;
        result_denom = num2 * denom1;
    }
    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;
}