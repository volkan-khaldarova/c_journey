#include <stdio.h>
#include <stdlib.h>

int main(void) {
  short unsigned int a = 65535;
  // short float b = 0.0f;
  long double c = 1.18e4932L;
  unsigned long d = 18446744073709551615UL;

  printf("Value short unsigned int a is: %hu\n", a);
  // printf("Value short float b is: %fh\n", b);
  printf("Value long double c is: %Lf\n", c);
  printf("Value unsigned long d is: %lu\n", d);

  return EXIT_SUCCESS;
}
