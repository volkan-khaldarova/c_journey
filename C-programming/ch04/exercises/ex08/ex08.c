#include <stdio.h>

int main(void)
{
    /* Initializing variables with arbitrary values to test the expressions */
    int a = 10, b = 5, c = 2, d = 3, e = 4;
    int result_original, result_parenthesized;

    printf("--- EXERCISE 14 ---\n");

    /* (a) a * b - c * d + e */
    result_original = a * b - c * d + e;
    result_parenthesized = ((a * b) - (c * d)) + e;
    printf("(a) Original: %d | Parenthesized: %d\n", result_original, result_parenthesized);

    /* (b) a / b % c / d */
    result_original = a / b % c / d;
    result_parenthesized = (((a / b) % c) / d);
    printf("(b) Original: %d | Parenthesized: %d\n", result_original, result_parenthesized);

    /* (c) - a - b + c - + d */
    result_original = - a - b + c - + d;
    result_parenthesized = ((((-a) - b) + c) - (+d));
    printf("(c) Original: %d | Parenthesized: %d\n", result_original, result_parenthesized);

    /* (d) a * - b / c - d */
    result_original = a * - b / c - d;
    result_parenthesized = (((a * (-b)) / c) - d);
    printf("(d) Original: %d | Parenthesized: %d\n", result_original, result_parenthesized);

    return 0;
}
