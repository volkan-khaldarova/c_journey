#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i = 10;
  int j = 2;
  int k;

  k = i / j + 'a';

  printf("Resolt for i / j + 'a' is: %d\n", k);

  return EXIT_SUCCESS;
}
