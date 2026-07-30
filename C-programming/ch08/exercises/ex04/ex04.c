#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define SIZE ((int)(sizeof(weekend) / sizeof(weekend[0])))

int main(void) {
  bool weekend[7] = {[0] = true, [6] = true};

  for (int i = 0; i < SIZE; i++) {
    printf("array[%d] = %d\n", i, weekend[i]);
  }

  return EXIT_SUCCESS;
}
