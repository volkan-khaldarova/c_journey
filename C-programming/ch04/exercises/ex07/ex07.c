#include <stdio.h>

int main(void) {
  int i, j;

  /* Fragment (a) */
  i = 5;
  j = ++i * 3 - 2;
  printf("Output (a): %d %d\n", i, j);

  /* Fragment (b) */
  i = 5;
  j = 3 - 2 * i++;
  printf("Output (b): %d %d\n", i, j);

  /* Fragment (c) */
  i = 7;
  j = 3 * i-- + 2;
  printf("Output (c): %d %d\n", i, j);

  /* Fragment (d) */
  i = 7;
  j = 3 + --i * 2;
  printf("Output (d): %d %d\n", i, j);

  return 0;
}
