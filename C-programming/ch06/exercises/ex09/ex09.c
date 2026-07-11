#include <stdlib.h>

int main(void) {
  int d, n = 7;
  for (d = 2; d * d <= n; d++) {
    if (n % d == 0)
      break;
  }

  return EXIT_SUCCESS;
}
