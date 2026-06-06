/* Display Flight darture and arrival times */

#include <stdio.h>

int main(void) {

    int hr, min, depHr, depMin, arrHr, arrMin, t;
    int d1 = 8 * 60, a1 = 10 * 60 + 16;
    int d2 = 9 * 60 + 43, a2 = 11 * 60 + 52;
    int d3 = 11 * 60 + 19, a3 = 13 * 60 + 31;
    int d4 = 12 * 60 + 47, a4 = 15 * 60;
    int d5 = 14 * 60, a5 = 16 * 60 + 8;
    int d6 = 15 * 60 + 45, a6 = 17 * 60 + 55;
    int d7 = 19*60, a7 = 21 * 60 + 20;
    int d8 = 21*60 + 45, a8 = 23 * 60 + 58;

    int best_dep, best_arr;
    int diff, best_diff;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hr, &min);

    t = (hr*60) + min;

    /* Initialize with first flight */
    best_dep = d1;
    best_arr = a1;

    if (t > d1)
        best_diff = t - d1;
    else
        best_diff = d1 - t;

    /* Check flight 2 */
    if (t > d2)
        diff = t - d2;
    else
        diff = d2 - t;

    if (diff < best_diff) {
        best_diff = diff;
        best_dep = d2;
        best_arr = a2;
    }

    /* Check flight 3 */
    if (t > d3)
        diff = t - d3;
    else
        diff = d3 - t;

    if (diff < best_diff) {
        best_diff = diff;
        best_dep = d3;
        best_arr = a3;
    }

    /* Check flight 4 */
    if (t > d4)
        diff = t - d4;
    else
        diff = d4 - t;

    if (diff < best_diff) {
        best_diff = diff;
        best_dep = d4;
        best_arr = a4;
    }

    /* Check flight 5 */
    if (t > d5)
        diff = t - d5;
    else
        diff = d5 - t;

    if (diff < best_diff) {
        best_diff = diff;
        best_dep = d5;
        best_arr = a5;
    }

    /* Check flight 6 */
    if (t > d6)
        diff = t - d6;
    else
        diff = d6 - t;

    if (diff < best_diff) {
        best_diff = diff;
        best_dep = d6;
        best_arr = a6;
    }

    /* Check flight 7 */
    if (t > d7)
        diff = t - d7;
    else
        diff = d7 - t;

    if (diff < best_diff) {
        best_diff = diff;
        best_dep = d7;
        best_arr = a7;
    }

    /* Check flight 8 */
    if (t > d8)
        diff = t - d8;
    else
        diff = d8 - t;

    if (diff < best_diff) {
        best_diff = diff;
        best_dep = d8;
        best_arr = a8;
    }

    depHr = best_dep / 60;
    depMin = best_dep % 60;
    arrHr = best_arr / 60;
    arrMin = best_arr % 60;

    printf("Closest departure time is %d:%02d, ", best_dep/60, best_dep % 60);
    printf("arriving at %d:%02d\n.", best_arr / 60, best_arr % 60);

    return 0;
}