#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i = 1;
  long int j = 1;
  unsigned int k = 1;
  unsigned int result = 0;

  result = i + (int)j * k;

  printf("The result of i + (int) j * k: %u\n", result);

  return EXIT_SUCCESS;
}
