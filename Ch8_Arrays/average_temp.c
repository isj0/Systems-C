/* Generate and display one month if hourly temperature readings */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_DAYS 30
#define NUM_HOURS 24

int main(void) {

    int temperature_readings [NUM_DAYS][NUM_HOURS];
    float sum, avg_daily, avg;

    srand((unsigned) time(NULL));

    for (int i = 0; i < NUM_DAYS; i++) {
        printf(" Day %2d:", i+1);
        sum = 0;
        for (int j = 0; j < NUM_HOURS; j++) {
            temperature_readings[i][j] = rand() % 90;
            sum += temperature_readings[i][j];
            printf("%3d", temperature_readings[i][j]);
        }
        avg_daily = sum / NUM_HOURS;
        printf(", Average = %4.2f\n", avg_daily);
    }

    // for (int i = 0; i < NUM_DAYS; i++) {
    //     printf(" Day %2d:", i+1);

    //     for (int j = 0; j < NUM_HOURS; j++) {
    //         printf("%3d", temperature_readings[i][j]);
    //     }
    //     printf("\n");
    // }


    return 0;
}