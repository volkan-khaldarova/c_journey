#include <stdio.h>

int main(void) {
  int i, j, k;

  /* Fragment (a) */
  i = 7;
  j = 8;
  i *= j + 1;
  printf("Output (a): %d %d\n", i, j);

  /* Fragment (b) */
  i = j = k = 1;
  i += j += k;
  printf("Output (b): %d %d %d\n", i, j, k);

  /* Fragment (c) */
  i = 1;
  j = 2;
  k = 3;
  i -= j -= k;
  printf("Output (c): %d %d %d\n", i, j, k);

  /* Fragment (d) */
  i = 2;
  j = 1;
  k = 0;
  i *= j *= k;
  printf("Output (d): %d %d %d\n", i, j, k);

  return 0;
}
