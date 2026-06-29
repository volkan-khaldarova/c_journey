#include <stdio.h>

int main(void) {
  int i, j;

  /* Fragment (a) */
  i = 6;
  j = i += i;
  printf("Output (a): %d %d\n", i, j);

  /* Fragment (b) */
  i = 5;
  j = (i -= 2) + 1;
  printf("Output (b): %d %d\n", i, j);

  /* Fragment (c) */
  i = 7;
  j = 6 + (i = 2.5);
  printf("Output (c): %d %d\n", i, j);

  /* Fragment (d) */
  i = 2;
  j = 8;
  j = (i = 6) + (j = 3);
  printf("Output (d): %d %d\n", i, j);

  return 0;
}
