#include <stdio.h>
#include <stdlib.h>

int main(void) {
  putchar(0b1000001);
  putchar(10);
  putchar('A');
  putchar(10);
  putchar(0101);
  putchar(10);
  putchar(0x41);
  putchar(10);

  return EXIT_SUCCESS;
}
