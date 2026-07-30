#include <stdio.h>
#include <stdlib.h>

int main(void) {
  // A simple array with 10 elements
  int a[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

  char ch = '3'; // We have the character '3', not the integer 3.

  // WRING APPROACH:
  // If we write a[ch], the program will try to access a[51] because the ASCII
  // value of '3' is 51.

  // CORRECT APPROACH
  // The operation ch - '0' subtracts the ASCII value of '0' (48) from '3' (51),
  // resulting in 3.
  int value = a[ch - '0'];

  printf("array[%c] = %d\n", ch, value); // Output: array[3] = 40

  return EXIT_SUCCESS;
}
