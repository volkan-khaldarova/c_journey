#include <stdio.h>
#include <stdlib.h>

int main(void) {
  /* Variables for each position in the 4*4 square */
  int r1c1, r1c2, r1c3, r1c4;
  int r2c1, r2c2, r2c3, r2c4;
  int r3c1, r3c2, r3c3, r3c4;
  int r4c1, r4c2, r4c3, r4c4;

  /* Prompt the user for input */
  printf("Enter the numbers from 1 to 16 in any order:\n");

  /* Read all 16 integers */
  scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &r1c1, &r1c2, &r1c3,
        &r1c4, &r2c1, &r2c2, &r2c3, &r2c4, &r3c1, &r3c2, &r3c3, &r3c4, &r4c1,
        &r4c2, &r4c3, &r4c4);

  /* Print the 4x4 grid. Using %2d ensures numbers align properly */
  printf("\n");
  printf("%2d %2d %2d %2d\n", r1c1, r1c2, r1c3, r1c4);
  printf("%2d %2d %2d %2d\n", r2c1, r2c2, r2c3, r2c4);
  printf("%2d %2d %2d %2d\n", r3c1, r3c2, r3c3, r3c4);
  printf("%2d %2d %2d %2d\n", r4c1, r4c2, r4c3, r4c4);

  /* Calculate and print row sums */
  printf("\nRow sums: %d %d %d %d\n", r1c1 + r1c2 + r1c3 + r1c4,
         r2c1 + r2c2 + r2c3 + r2c4, r3c1 + r3c2 + r3c3 + r3c4,
         r4c1 + r4c2 + r4c3 + r4c4);

  /* Calculate and print column sums */
  printf("Column sums: %d %d %d %d\n", r1c1 + r2c1 + r3c1 + r4c1,
         r1c2 + r2c2 + r3c2 + r4c2, r1c3 + r2c3 + r3c3 + r4c3,
         r1c4 + r2c4 + r3c4 + r4c4);

  /* Calculate and print diagonal sums */
  printf("Diagonal sums: %d %d\n", r1c1 + r2c2 + r3c3 + r4c4,
         r1c4 + r2c3 + r3c2 + r4c1);

  return EXIT_SUCCESS;
}
