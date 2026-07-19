#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i = 1;
  float f = 1.0f;
  double d = 0.0;

  d = i + f;

  printf("The result for d = i + f is: %lf\n", d);

  return EXIT_SUCCESS;
}
