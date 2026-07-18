#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int m = 0;
  int n = 0;
  int remainder = 0;

  /* Prompt the user for two integers only once before the calculation */
  printf("Enter two integers: ");

  /* Validate the input to ensure two integers are entered */
  if (scanf("%d %d", &m, &n) != 2) {
    puts("Invalid Input!");
    return EXIT_FAILURE;
  }

  /* Handle the edge case where the second number is initially zero */
  if (n == 0) {
    printf("Greatest common divisor: %d\n", m);
    return EXIT_SUCCESS;
  }

  /* Execute the Euclidean algorithm to find the greatest common divisor */
  while (n != 0) {
    remainder = m % n;
    m = n;
    n = remainder;
  }

  /* Print the final result */
  printf("Greatest common divisor: %d\n", m);

  return EXIT_SUCCESS;
}
