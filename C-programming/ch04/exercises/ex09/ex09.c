#include <stdio.h>

int main(void)
{
    int i, j;

    printf("--- EXERCISE 15 ---\n");

    /* (a) i += j; */
    i = 1;
    j = 2;
    i += j;
    printf("(a) Final values -> i: %d, j: %d\n", i, j);

    /* (b) i--; */
    i = 1;
    j = 2;
    i--;
    printf("(b) Final values -> i: %d, j: %d\n", i, j);

    /* (c) i * j / i; */
    i = 1;
    j = 2;
    /* The expression is evaluated, but the result is not assigned to any variable */
    i * j / i;
    printf("(c) Final values -> i: %d, j: %d\n", i, j);

    /* (d) i % ++j; */
    i = 1;
    j = 2;
    /* ++j alters j directly, but the modulo result is discarded */
    i % ++j;
    printf("(d) Final values -> i: %d, j: %d\n", i, j);

    return 0;
}
