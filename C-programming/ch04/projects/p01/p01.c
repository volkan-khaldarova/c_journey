#include <stdio.h>

int main(void)
{
    int number, digit1, digit2;

    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    /* * n % 10 gives the last digit (ones place)
     * n / 10 gives the first digit (tens place)
     */
    digit1 = number / 10;
    digit2 = number % 10;

    printf("The reversal is: %d%d\n", digit2, digit1);

    return 0;
}
