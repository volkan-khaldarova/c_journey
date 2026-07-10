#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i;
  for (i = 10; i > 1; i /= 2) {
    printf("%d\n", i++);
  }

  return EXIT_SUCCESS;
}
