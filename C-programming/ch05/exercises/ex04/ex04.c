#include <stdio.h>

int main() {
    int i, j;
    int result;

    printf("--- Testing (i > j) - (i < j) ---\n\n");

    // Test Case 1: i is less than j
    i = 5;
    j = 10;
    result = (i > j) - (i < j);
    printf("Test 1 (i < j): i = %d, j = %d\n", i, j);
    printf("Result: %d\n\n", result);

    // Test Case 2: i is equal to j
    i = 7;
    j = 7;
    result = (i > j) - (i < j);
    printf("Test 2 (i == j): i = %d, j = %d\n", i, j);
    printf("Result: %d\n\n", result);

    // Test Case 3: i is greater than j
    i = 12;
    j = 4;
    result = (i > j) - (i < j);
    printf("Test 3 (i > j): i = %d, j = %d\n", i, j);
    printf("Result: %d\n", result);

    return 0;
}
