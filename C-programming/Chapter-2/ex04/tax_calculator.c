#include <stdio.h>

int main(void) {
  float amount;
  float total;
  const float tax_rate = 0.05f;

  printf("Enter an amount: ");
  if (scanf("%f", &amount) != 1) {
    return (1);
  }

  total = amount + (amount * tax_rate);

  printf("With tax added: $%.2f\n", total);
  return (0);
}
