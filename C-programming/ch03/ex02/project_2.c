#include <stdio.h>

int main(void) {
  int number, m, d, y;
  float price;

  printf("Enter item number: ");
  scanf("%d", &number);

  printf("Enter unit price: ");
  scanf("%f", &price);

  printf("Enter pruchase date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &m, &d, &y);

  printf("Item\tUnit\t\tPruchase\n");
  printf("\tPrice\t\tDate\n");
  printf("%-4d\t$%7.2f\t%2d/%2d/%4d", number, price, m, d, y);

  return 0;
}
