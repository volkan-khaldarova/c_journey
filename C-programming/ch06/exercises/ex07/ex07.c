#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i;
  i = 10;
  while (i >= 1) {
    printf("%d\n", i++);
    i--;
    i /= 2;
  }

  return EXIT_SUCCESS;
}
