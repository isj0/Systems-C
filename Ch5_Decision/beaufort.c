/* Compute and display wind force using the Beaufort Scale */

#include <stdio.h>

int main(void)
{
    int speed;

    printf("Please enter the Wind speed (in knots): ");
    scanf("%d", &speed);

    if (speed >= 0 && speed < 1)
        printf("Calm\n");
    else if (speed >= 1 && speed <= 3)
        printf("Light Air\n");
    else if (speed >= 4 && speed <= 27)
        printf("Breeze\n");
    else if (speed >= 28 && speed <= 47)
        printf("Gale\n");
    else if (speed >= 48 && speed <= 63)
        printf("Storm\n");
    else if (speed >= 63)
        printf("Hurricane\n");
    else printf("Please enter a valid speed.\n");           

    return 0;
}