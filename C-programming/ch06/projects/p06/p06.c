/* Prints a table of squares using an odd method */
#include <stdio.h>

/* Prints a table of squares using an odd method */
#include <stdio.h>

int main(void) {
  int i, n, odd, square;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &n);

  /* Initialize variables outside the loop */
  odd = 3;
  square = 1;

  /* The for loop only initializes, tests, and increments 'i' */
  for (i = 1; i <= n; i++) {
    printf("%10d%10d\n", i, square);

    /* Update the square and odd values for the next iteration */
    square += odd;
    odd += 2;
  }

  return 0;
}
