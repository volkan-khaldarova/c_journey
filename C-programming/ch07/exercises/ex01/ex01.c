#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int a, b, c;
  a = 077;
  b = 0x77;
  c = 0XABC;

  printf("a value is: %d\n", a);
  printf("b value is: %d\n", b);
  printf("c value is: %d\n", c);

  return EXIT_SUCCESS;
}
