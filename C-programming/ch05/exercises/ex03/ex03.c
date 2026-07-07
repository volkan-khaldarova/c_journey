#include <stdio.h>

int main() {
    // Declare variables
    int i, j, k;

    // ==========================================
    // SECTION 3: SHORT-CIRCUIT BEHAVIOR
    // ==========================================
    printf("\n--- Short-Circuit Behavior ---\n");

    // Fragment (a)
    i = 3; j = 4; k = 5;
    printf("Output (a) part 1: %d\n", i < j || ++j < k);
    printf("Output (a) part 2: %d %d %d\n", i, j, k);

    // Fragment (b)
    i = 7; j = 8; k = 9;
    printf("Output (b) part 1: %d\n", i - 7 && j++ < k);
    printf("Output (b) part 2: %d %d %d\n", i, j, k);

    // Fragment (c)
    i = 7; j = 8; k = 9;
    printf("Output (c) part 1: %d\n", (i = j) || (j = k));
    printf("Output (c) part 2: %d %d %d\n", i, j, k);

    // Fragment (d)
    i = 1; j = 1; k = 1;
    printf("Output (d) part 1: %d\n", ++i || ++j && ++k);
    printf("Output (d) part 2: %d %d %d\n", i, j, k);

    return 0;
}
