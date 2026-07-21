#include <stdio.h>
#include <stdlib.h>

int main(void) {
  long int i, n;

  printf("How many rows should the table have? ");
  if (scanf("%ld", &n) != 1) {
    puts("Invalid input !");
    return EXIT_FAILURE;
  }

  getchar();

  for (i = 1; i <= n; i++) {
    printf("%10ld%10ld\n", i, i * i);

    if (i % 24 == 0) {
      printf("Press Enter to continue...\n");
      getchar();
    }
  }

  return EXIT_SUCCESS;
}
