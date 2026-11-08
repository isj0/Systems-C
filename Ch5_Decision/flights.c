/* Display departure and arrival times for the 
 * flight whose departure time is closest to the one entered. */

 #include <stdio.h>

 int main(void) {

    int hr, min, totalMins;
    int dep1 = 8 * 60;          // 8:00 AM
    int dep2 = 9 * 60 + 43;     // 9:43 AM
    int dep3 = 11 * 60 + 19;    // 11:19 AM
    int dep4 = 12 * 60 + 47;    // 12:47 PM
    int dep5 = 14 * 60;         // 2:00 PM
    int dep6 = 15 * 60 + 45;    // 3:45 PM
    int dep7 = 19 * 60;         // 7:00 PM
    int dep8 = 21 * 60 + 45;    // 9:45 PM

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hr, &min);

    totalMins = (60 * hr) + min;

    if (totalMins < (dep1 + dep2) / 2)
        printf("Closest departure time is 8:00 AM., arriving at 10:16 AM\n");
    else if (totalMins < (dep2 + dep3) / 2)
        printf("Closest departure time is 9:43 AM., arriving at 11:52 AM\n");
    else if (totalMins < (dep3 + dep4) / 2)
        printf("Closest departure time is 11:19 AM., arriving at 1:31 PM\n");
    else if (totalMins < (dep4 + dep5) / 2)
        printf("Closest departure time is 12:47 PM., arriving at 3:00 PM\n");
    else if (totalMins < (dep5 + dep6) / 2)
        printf("Closest departure time is 2:00 PM., arriving at 4:08 PM\n");
    else if (totalMins < (dep6 + dep7) / 2)
        printf("Closest departure time is 3:45 PM., arriving at 5:55 PM\n");
    else if (totalMins < (dep7 + dep8) / 2)
        printf("Closest departure time is 7:00 PM., arriving at 9:20 PM\n");
    else if (totalMins < dep8)
        printf("Closest departure time is 9:45 PM., arriving at 11:58 PM\n");
    else
        printf("Closest departure time is 9:45 PM., arriving at 11:58 PM\n");
    
    



    return 0;
 }