
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  // Değişkenler döngü başında int ile tanımlandı
  // Koşul kısmı && (VE) operatörü ile düzeltildi
  for (int i = 5, j = i - 1; i > 0 && j > 0; --i, j = i - 1)
    printf("%d ", i);

  return EXIT_SUCCESS;
}
