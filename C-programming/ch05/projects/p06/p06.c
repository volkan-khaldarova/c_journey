#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int a, b, c, d, temp;

  printf("Enter four integers: ");
  if (scanf("%d %d %d %d", &a, &b, &c, &d) != 4) {
    puts("Invalid input!\n");
    return EXIT_FAILURE;
  }

  if (a > b) {
    temp = a;
    a = b;
    b = temp;
  }

  if (c > d) {
    temp = c;
    c = d;
    d = temp;
  }

  if (a > c) {
    temp = a;
    a = c;
    c = temp;
  }

  if (b > d) {
    temp = b;
    b = d;
    d = temp;
  }

  if (b > c) {
    temp = b;
    b = c;
    c = temp;
  }

  printf("Largest: %d\n", d);
  printf("Smallest: %d\n", a);
  return EXIT_SUCCESS;
}
