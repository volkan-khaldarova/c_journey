#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char c = '\1';
  short s = 2;
  int i = -3;
  long m = 5;
  float f = 6.5f;
  double d = 7.5;

  printf("The result of a = c * i is: %d\n", c * i);
  printf("The result of b = s + m is: %ld\n", s + m);
  printf("The result of c = f / c is: %f\n", f / c);
  printf("The result of d = d / s is: %lf\n", d / s);
  printf("The result of e = f - d is: %lf\n", f - d);
  printf("The result of f = (int) f is: %d\n", (int)f);

  return EXIT_SUCCESS;
}
