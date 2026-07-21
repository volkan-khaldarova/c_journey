#include <stdio.h>
#include <stdlib.h>

/* Global Scope: Bütün fonksiyonlar bu tipleri kullanabilir */
typedef signed char Int8;
typedef short int Int16;
typedef int Int32;

int main(void) {
  Int8 i = 127;
  Int16 j = 32767;
  Int32 k = 2147483647;

  printf("Int8 max value is: %d\n", i);
  printf("Int16 max value is: %hd\n", j);
  printf("Int32 max value is: %d\n", k);

  return EXIT_SUCCESS;
}
