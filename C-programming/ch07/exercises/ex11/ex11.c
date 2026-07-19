#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i = 1;
  float f = 1.0f;
  double d = 1.0;
  double result = 0;

  result = i * f / d;

  printf("The result of i * f / d is: %lf", result);

  return EXIT_SUCCESS;
}
