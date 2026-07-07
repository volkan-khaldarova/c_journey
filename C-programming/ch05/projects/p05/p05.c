#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float income;

  printf("Enter the income: ");

  if (scanf("%f", &income) != 1 || income < 0.0f) {
    puts("Invalid input.");
    return EXIT_FAILURE;
  }

  if (income <= 750.0f)
    printf("Tax due is: $%.2f\n", income * 0.01f);
  else if (income <= 2250.0f)
    printf("Tax due is: $%.2f\n", ((income - 750.0f) * 0.02f) + 7.50f);
  else if (income <= 3750.0f)
    printf("Tax due is: $%.2f\n", ((income - 2250.0f) * 0.03f) + 37.50f);
  else if (income <= 5250.0f)
    printf("Tax due is: $%.2f\n", ((income - 3750.0f) * 0.04f) + 82.50f);
  else if (income <= 7000.0f)
    printf("Tax due is: $%.2f\n", ((income - 5250.0f) * 0.05f) + 142.50f);
  else
    printf("Tax due is: $%.2f\n", ((income - 7000.0f) * 0.06f) + 230.0f);

  return EXIT_SUCCESS;
}
