/* Calculates a broker's commission and compares it with a rival's */
#include <stdio.h>

int main(void) {
  float price, value, original_commission, rival_commission;
  int shares;

  /* (a) Ask for the number of shares and price per share */
  printf("Enter number of shares: ");
  scanf("%d", &shares);

  printf("Enter price per share: ");
  scanf("%f", &price);

  /* Calculate the total value of the trade */
  value = shares * price;

  /* Compute original broker's commission */
  if (value < 2500.00f)
    original_commission = 30.00f + .017f * value;
  else if (value < 6250.00f)
    original_commission = 56.00f + .0066f * value;
  else if (value < 20000.00f)
    original_commission = 76.00f + .0034f * value;
  else if (value < 50000.00f)
    original_commission = 100.00f + .0022f * value;
  else if (value < 500000.00f)
    original_commission = 155.00f + .0011f * value;
  else
    original_commission = 255.00f + .0009f * value;

  if (original_commission < 39.00f)
    original_commission = 39.00f;

  /* (b) Compute rival broker's commission */
  if (shares < 2000)
    rival_commission = 33.00f + 0.03f * shares;
  else
    rival_commission = 33.00f + 0.02f * shares;

  /* Display both commissions */
  printf("Original broker's commission: $%.2f\n", original_commission);
  printf("Rival broker's commission: $%.2f\n", rival_commission);

  return 0;
}
