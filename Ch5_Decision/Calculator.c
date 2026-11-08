// Program is printing calculator

#include <stdio.h>

int main(void) {

    float value, current;
    char op;

    printf("Begin Calculations...\n");
    scanf ("%f %c", &value, &op);
    
    while (op != 'E') {
        if (op == 'S') {
            current =  value;
            printf("=   %f\n", current);
        }
        else if (op == '+') {
            current += value;
            printf("=   %f\n", current);
        }
        else if (op == '-') {
            current -= value;
            printf("=   %f\n", current);
        }
        else if (op == '*') {
            current *= value;
            printf("=   %f\n", current);
        }
        else if (op == '/') {
            if (value == 0) {
                printf("Division by zero...\n");
            }
            else {
                current /= value;
                printf("=   %f\n", current);
            }
            
        }

        scanf ("%f %c", &value, &op);
    }



    printf("End of calulations...\n");

    return 0;

}