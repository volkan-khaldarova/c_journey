#include <stdio.h>

int main(void) {
    // 1. Initialize variable and pointers
    int number = 100;
    int *ptr1 = &number;
    int *ptr2 = ptr1; // Both pointers point to the same address

    // 2. Display memory addresses
    printf("--- Memory Addresses ---\n");
    printf("Address of 'number': %p\n", (void*)&number);
    printf("Address stored in ptr1: %p\n", (void*)ptr1);
    printf("Address stored in ptr2: %p\n\n", (void*)ptr2);

    // 3. Display values
    printf("--- Initial Values ---\n");
    printf("Value of 'number': %d\n", number);
    printf("Value via ptr1: %d\n", *ptr1);
    printf("Value via ptr2: %d\n\n", *ptr2);

    // 4. Modify value and show the impact
    number = 250;
    printf("--- After Modifying 'number' ---\n");
    printf("New value of 'number': %d\n", number);
    printf("Updated value via ptr1: %d\n", *ptr1);
    printf("Updated value via ptr2: %d\n", *ptr2);

    return 0;
}
