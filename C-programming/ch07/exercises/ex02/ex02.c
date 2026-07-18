#include <stdio.h>
#include <stdlib.h>

int main(void) {

  float a, b, c, d, e;

  a = 010E2;
  b = 32.1E+5;
  /* c = 0790; */
  /* d = 100_000; */
  e = 3.978e-2;

  printf("Value of a is: %f\n", a);
  printf("Value of b is: %f\n", b);
  /* printf("Value of c is: %f\n", c); */
  /* printf("Value of d is: %f\n", d); */
  printf("Value of e is: %f\n", e);

  return EXIT_SUCCESS;
}
