/* Evaluates wind speed using a simplified Beaufort scale */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float speed;

  printf("Enter a wind speed (in knots): ");

  /* Read input and validate */
  if (scanf("%f", &speed) != 1 || speed < 0.0f) {
    printf("Invalid input. Please enter a positive number.\n");
    return EXIT_FAILURE;
  }

  /* Determine and display the corresponding description */
  if (speed < 1.0f)
    puts("Calm\n");
  else if (speed <= 3.0f)
    puts("Light air\n");
  else if (speed <= 27.0f)
    puts("Breeze\n");
  else if (speed <= 47.0f)
    puts("Gal\n");
  else if (speed <= 63.0f)
    puts("Storm\n");
  else
    puts("Hurricane\n");

  return EXIT_SUCCESS;
}
