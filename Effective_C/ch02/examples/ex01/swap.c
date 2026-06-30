#include <stdio.h>
#include <stdlib.h>

void swap(int *pa, int *pb) {
  int t = *pa;
  *pa = *pb;
  *pb = t;

  printf("a value is: %d b value is: %d\n", *pa, *pb);
}

int main(void) {
  int a, b;
  a = 1;
  b = 2;

  printf("a value is: %d b value is: %d\n", a, b);
  swap(&a, &b);
  printf("a value is: %d b value is: %d\n", a, b);

  return EXIT_SUCCESS;
}
