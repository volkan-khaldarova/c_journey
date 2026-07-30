#include <stdio.h>
#include <stdlib.h>

int main(void) {
  // Let's assume updated the array type to 'double' later in the project.
  // The array has exactly 5 elements.
  double a[] = {10.5, 20.2, 30.1, 40.8, 50.4};

  // ---------------------------------------------------------
  // 1. SUPER TECHNIQUE (Dynamic and Safe)
  // ---------------------------------------------------------
  int good_technique = sizeof(a) / sizeof(a[0]);
  // Calculation: 40 bytes / 8 bytes = 5 elements (CORRECT)

  // ---------------------------------------------------------
  // 2. INFERIOR TECHNIQUE (Static and Error-Prone)
  // The array became a double, but we forgot to update the 'int' Error-Prone
  // ---------------------------------------------------------
  int inferior_technique = sizeof(a) / sizeof(int);
  // Calculation: 40 bytes / 4 bytes = 10 elements (WRONG!)

  printf("Superior technique result: %d elements\n", good_technique);
  printf("Inferior technique result: %d elements\n", inferior_technique);
  return EXIT_SUCCESS;
}
