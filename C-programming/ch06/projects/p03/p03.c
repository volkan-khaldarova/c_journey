#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int numerator, denominator, m, n, remainder;

  printf("Enter a fraction: ");
  if (scanf("%d/%d", &numerator, &denominator) != 2) {
    puts("Invalid Input!");
    return EXIT_FAILURE;
  }

  m = numerator;
  n = denominator;

  while (n != 0) {
    remainder = m % n;
    m = n;
    n = remainder;
  }

  numerator = numerator / m;
  denominator = denominator / m;

  printf("In lowest terms: %d/%d\n", numerator, denominator);
  return EXIT_SUCCESS;
}
