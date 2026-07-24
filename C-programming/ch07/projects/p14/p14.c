#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    double x;
    double y = 1.0;
    double average;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    /* Continue refining the guess 'y' until the difference is extremely small */
    while (1) {
        average = (y + (x / y)) / 2.0;

        /* fabs() calculates the absolute value for double type floats */
        if (fabs(y - average) < 0.00001 * y) {
            y = average;
            break;
        }
        y = average;
    }

    printf("Square root: %.5f\n", y);

    return EXIT_SUCCESS;
}
