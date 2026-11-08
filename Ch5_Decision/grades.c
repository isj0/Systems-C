/* Convert and dispaly numerical grade to letter grade */

#include <stdio.h>

int main(void) {

    int marks, digit;
    char grade;

    printf("Enter numerical grade: ");
    scanf("%d", &marks);
    digit = marks / 10;

    switch (digit) {
        case 10: case 9: 
            grade = 'A'; break;
        case 8: 
            grade = 'B'; break;
        case 7: 
            grade = 'C'; break;
        case 6: 
            grade = 'D'; break;
        case 5: case 4: case 3: case 2: case 1: case 0:
            grade = 'F'; break;
        default: printf("Error ! Incorrect marks entered.\n"); break;
    }

    printf("Letter grade: %c\n", grade);

    return 0;
}