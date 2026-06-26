#include <stdio.h>

int main(void) {
  int n, first_digit, second_digit, third_digit;

  printf("Enter a three-digit number: ");
  scanf("%d", &n);

  third_digit = n % 10;         /* birler hanesi (son rakam) */
  second_digit = (n / 10) % 10; /* onlar hanesi (orta rakam) */
  first_digit = n / 100;        /* yüzler hanesi (ilk rakam) */

  printf("The reversal is: %d%d%d\n", third_digit, second_digit, first_digit);

  return 0;
}
