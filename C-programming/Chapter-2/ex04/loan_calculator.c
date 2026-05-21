#include <stdio.h>

int main(void) {
  float loan, interest_rate, monthly_payment, monthly_interest;
  float balance;

  printf("Enter amount of loan: ");
  if (scanf(" %f", &loan) != 1)
    return (1);

  printf("Enter interest rate: ");
  if (scanf(" %f", &interest_rate) != 1)
    return (1);

  printf("Enter monthly payment: ");
  if (scanf(" %f", &monthly_payment) != 1)
    return (1);

  // Calculate monthly interest rate (percentage to decimal / 12)
  monthly_interest = (interest_rate / 100.0f) / 12.0f;
  balance = loan;

  // First month
  balance = (balance - monthly_payment) + (balance * monthly_interest);
  printf("Balance remaining after first payment: $%.2f\n", balance);

  // Second month
  balance = (balance - monthly_payment) + (balance * monthly_interest);
  printf("Balance remaining after second payment: $%.2f\n", balance);

  // Third month
  balance = (balance - monthly_payment) + (balance * monthly_interest);
  printf("Balance remaining after third payment: $%.2f\n", balance);

  return (0);
}
