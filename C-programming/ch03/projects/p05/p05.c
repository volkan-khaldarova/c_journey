/* Adds two fractions */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int num1, denom1, num2, denom2, result_num, result_denom;

  /* Updated prompt to ask for both fractions at once */
  printf("Enter two fractions separated by a plus sign: ");

  /* * The format string tells scanf to look for:
   * an integer, a '/', an integer, a '+', an integer, a '/', and an integer.
   */
  scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

  result_num = num1 * denom2 + num2 * denom1;
  result_denom = denom1 * denom2;

  printf("The sum is %d/%d\n", result_num, result_denom);

  return EXIT_SUCCESS;
}
