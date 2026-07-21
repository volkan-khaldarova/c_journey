#include <stdio.h>
#include <stdlib.h>

int main(void) {
  double n, sum;
  n = 0.0;
  sum = 0.0;

  printf("Enter the numbers (press 0 to finish: ");
  if (scanf("%lf", &n) != 1) {
    puts("Invalid input!");
    return EXIT_FAILURE;
  }

  while (n != 0) {
    sum += n;
    if (scanf("%lf", &n) != 1) {
      puts("Invalid input!");
      return EXIT_FAILURE;
    }
  }

  printf("Total is: %g\n", sum);

  return EXIT_SUCCESS;
}
