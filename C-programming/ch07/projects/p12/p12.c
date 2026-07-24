#include <stdio.h>
#include <stdlib.h>

int main(void) {
  float value, operand;
  char operator;

  printf("Enter an expression: ");

  /* İlk sayıyı alıyoruz */
  scanf("%f", &value);

  while (1) {
    /* Operatörü okuyoruz */
    operator = getchar();

    /* Eğer kullanıcı Enter'a bastıysa döngüden ve işlemden çıkıyoruz */
    if (operator == '\n') {
      break;
    }

    /* Operatörden sonraki sayıyı okuyoruz */
    scanf("%f", &operand);

    /* İşlemi yapıp ana değere ekliyoruz */
    switch (operator) {
    case '+':
      value += operand;
      break;
    case '-':
      value -= operand;
      break;
    case '*':
      value *= operand;
      break;
    case '/':
      value /= operand;
      break;
    }
  }

  printf("Value of expression: %.1f\n", value);

  return EXIT_SUCCESS;
}
