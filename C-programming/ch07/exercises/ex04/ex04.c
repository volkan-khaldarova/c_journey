#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int i = 0;
  char c;
  c = 'c';

  i += c;
  c = 2 * c - 1;
  putchar(c);
  // printf(c);

  printf("\nValue i is: %d\n", i);
  return EXIT_SUCCESS;
}
