#include <stdio.h>

int main(void) {
  float x;
  float result;

  printf("Enter a value for x: ");
  if (scanf("%f", &x) != 1) {
    return (1);
  }

  result = (3.0f * x * x * x * x * x) + (2.0f * x * x * x * x) - (x * x) +
           (7.0f * x) - 6.0f;

  printf("Result: %.2f\n", result);
  return (0);
}
