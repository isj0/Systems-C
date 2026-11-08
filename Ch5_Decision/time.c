/* Convert and Display 24 hr time to 12 hr time */

#include <stdio.h>

int main(void)
{
    int hr1, hr2, min;
    
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hr1, &min);

    if (hr1 >= 0 && hr1 < 12) 
    {
        printf("Equivalent 12-hour time: %d:%d AM\n", hr1, min);
    }
    else 
    {
        switch (hr1)
        {
            case 12: hr2 = 12; break;
            case 13: hr2 = 1; break;
            case 14: hr2 = 2; break;
            case 15: hr2 = 3; break;
            case 16: hr2 = 4; break;
            case 17: hr2 = 5; break;
            case 18: hr2 = 6; break;
            case 19: hr2 = 7; break;
            case 20: hr2 = 8; break;
            case 21: hr2 = 9; break;
            case 22: hr2 = 10; break;
            case 23: hr2 = 11; break;
            default: hr2: 12; break;
        }

        printf("Equivalent 12-hour time: %d:%d PM\n", hr2, min);
    }
    
}