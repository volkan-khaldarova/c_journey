#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i;
  i = 1;
  while (i <= 128) {
    printf("%d\n", i);
    i = i * 2;
  }

  return EXIT_SUCCESS;
}
