#include <stdio.h>

int main(void)
{
    int number, digit1, digit2, digit3;

    printf("Enter a three-digit number: ");
    scanf("%d", &number);

    /* Extracting digits using arithmetic */
    digit1 = number / 100;              /* Gets the hundreds place */
    digit2 = (number / 10) % 10;        /* Gets the tens place */
    digit3 = number % 10;               /* Gets the ones place */

    printf("The reversal is: %d%d%d\n", digit3, digit2, digit1);

    return 0;
}
