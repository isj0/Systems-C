/* Generate and display one month if hourly temperature readings */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_DAYS 30
#define NUM_HOURS 24

int main(void) {

    int temperature_readings [NUM_DAYS][NUM_HOURS];

    srand((unsigned) time(NULL));

    for (int i = 0; i < NUM_DAYS; i++) {
        for (int j = 0; j < NUM_HOURS; j++) {
            temperature_readings[i][j] = rand() % 90;
        }
    }

    for (int i = 0; i < NUM_DAYS; i++) {
        printf(" Day %2d:", i+1);

        for (int j = 0; j < NUM_HOURS; j++) {
            printf("%3d", temperature_readings[i][j]);
        }
        printf("\n");
    }


    return 0;
}