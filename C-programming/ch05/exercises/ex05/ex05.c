#include <stdio.h>
#include <stdbool.h> // Required to use 'bool', 'true', and 'false' in C

int main() {
    int age;
    bool teenager;

    printf("--- Teenager Boolean Logic Test ---\n\n");

    // Test Case 1: Below the teenage range
    age = 12;
    teenager = (age >= 13 && age <= 19);
    printf("Age: %d \nIs teenager? %s\n\n", age, teenager ? "true" : "false");

    // Test Case 2: Inside the teenage range
    age = 15;
    teenager = (age >= 13 && age <= 19);
    printf("Age: %d \nIs teenager? %s\n\n", age, teenager ? "true" : "false");

    // Test Case 3: Above the teenage range
    age = 20;
    teenager = (age >= 13 && age <= 19);
    printf("Age: %d \nIs teenager? %s\n", age, teenager ? "true" : "false");

    return 0;
}
