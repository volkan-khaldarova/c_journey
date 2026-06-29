#include <stdio.h>

int main(void) {
  int i, j, k;

  /* Fragment (a) */
  i = 1;
  printf("Output (a): ");
  printf("%d ", i++ - 1);
  printf("%d\n", i);

  /* Fragment (b) */
  i = 10;
  j = 5;
  printf("Output (b): ");
  printf("%d ", i++ - ++j);
  printf("%d %d\n", i, j);

  /* Fragment (c) */
  i = 7;
  j = 8;
  printf("Output (c): ");
  printf("%d ", i++ - --j);
  printf("%d %d\n", i, j);

  /* Fragment (d) */
  i = 3;
  j = 4;
  k = 5;
  printf("Output (d): ");
  printf("%d ", i++ - j++ + --k);
  printf("%d %d %d\n", i, j, k);

  return 0;
}
