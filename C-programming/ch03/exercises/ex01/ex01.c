#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float x;
  x = 1234.5f;

  printf("%-8.1e\n", x);
  printf("%10.6e\n", x);
  printf("%-8.3f\n", x);
  printf("%6.0f\n", x);

  return EXIT_SUCCESS;
}
