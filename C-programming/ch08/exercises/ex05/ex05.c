#include <stdio.h>
#include <stdlib.h>
#define SIZE ((int)(sizeof(fib_numbers) / sizeof(fib_numbers[0])))

int main(void) {
  long int fib_numbers[40];

  fib_numbers[0] = 0;
  fib_numbers[1] = 1;

  for (int i = 2; i < SIZE; i++) {
    fib_numbers[i] = fib_numbers[i - 1] + fib_numbers[i - 2];
  }

  printf("fib_numbers[%d] = ", SIZE);
  for (long i = 0; i < SIZE; i++) {
    printf("%ld, ", fib_numbers[i]);
  }
  printf("\n");

  return EXIT_SUCCESS;
}
