#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float f = 5000000000.0f;
  float frac_part = 0.0f;

  frac_part = f - (int)f;

  printf("Value of frac part is: %f\n", frac_part);

  return EXIT_SUCCESS;
}
