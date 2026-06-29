#include <stdio.h>

int main(void)
{
    int number, octal1, octal2, octal3, octal4, octal5;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &number);

    /* * Extracting octal digits from right to left
     * by finding the remainder and then dividing by 8
     */
    octal5 = number % 8;
    number /= 8;

    octal4 = number % 8;
    number /= 8;

    octal3 = number % 8;
    number /= 8;

    octal2 = number % 8;
    number /= 8;

    octal1 = number % 8;

    /* Print the 5 digits */
    printf("In octal, your number is: %0d%d%d%d%d\n", octal1, octal2, octal3, octal4, octal5);

    return 0;
}
