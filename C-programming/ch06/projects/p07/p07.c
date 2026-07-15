#include <stdio.h>

int main(void) {
    int days, start_day, i;

    /* 1. Prompt the user for the number of days and the starting day */
    printf("Enter number of days in month: ");
    scanf("%d", &days);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start_day);

    /* 2. Print leading spaces for the first week.
     *      If start_day is 3 (Tuesday), this loop runs for i=1 and i=2,
     *      printing spaces for Sunday and Monday.
     *      Each day occupies 3 characters of space ("   "). */
    for (i = 1; i < start_day; i++) {
        printf("   ");
    }

    /* 3. Print the days of the month */
    for (i = 1; i <= days; i++) {
        printf("%2d ", i); /* Print the day taking up 2 characters, plus 1 space */

        /* 4. The Line-Break Logic (Enter)
         *          Determine if the current day is the last day of the week (Saturday).
         *          We add the printed day (i) to the number of empty slots (start_day - 1).
         *          If this sum is a multiple of 7, we have reached the end of the row. */
        if ((i + start_day - 1) % 7 == 0) {
            printf("\n");
        }
    }

    /* Print a final newline if the month doesn't end exactly on a Saturday
     *      to keep the terminal output clean. */
    if ((days + start_day - 1) % 7 != 0) {
        printf("\n");
    }

    return 0;
}
