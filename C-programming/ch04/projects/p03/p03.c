#include <stdio.h>

int main(void)
{
    int digit1, digit2, digit3;

    printf("Enter a three-digit number: ");

    /* %1d forces scanf to read exactly one digit at a time */
    scanf("%1d%1d%1d", &digit1, &digit2, &digit3);

    /* Print them in reverse order */
    printf("The reversal is: %d%d%d\n", digit3, digit2, digit1);

    return 0;
}
