#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int user_number;

  scanf("%d", &user_number);

  for (int i = 2; (i * i) <= user_number; i += 2) {
    int square = i * i;
    printf("%d\n", square);
  }

  return EXIT_SUCCESS;
}
