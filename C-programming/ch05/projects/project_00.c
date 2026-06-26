#include <stdio.h>

int main(void) {

  int number;

  printf("Enter a number: ");
  scanf("%d", &number);

  if (number < 10) {
    printf("The number %d has 1 digit\n", number);
  } else if (number < 100) {
    printf("The number %d has 2 digit\n", number);
  } else if (number < 10000) {
    printf("The number %d has 3 digit\n", number);
  } else if (number < 100000) {
    printf("The number %d has 4 digit\n", number);
  } else {
    printf("The number %d out of the range digit\n", number);
  }

  return 0;
}
