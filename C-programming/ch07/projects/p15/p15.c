#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, i;

    /* To test other types, change 'short' and the printf format specifier */
    /* e.g., long long factorial = 1; and printf("%lld", factorial); */
    short factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        factorial *= i;
    }

    /* %hd is used for short integer */
    printf("Factorial of %d: %hd\n", n, factorial);

    return EXIT_SUCCESS;
}
