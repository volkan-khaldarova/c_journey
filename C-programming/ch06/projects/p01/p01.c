#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float number = 0.0f, temp;

  do {
    printf("Enter a number: ");

    if (scanf("%f", &temp) != 1) {
      puts("Invalid Input!");
      return EXIT_FAILURE;
    }

    if (temp > 0 && temp > number) {
      number = temp;
    }

  } while (temp > 0);

  if (number > 0) {
    printf("The largest number entered was: %.2f\n", number);
  } else {
    printf("No positive number were entered.\n");
  }

  return EXIT_SUCCESS;
}
