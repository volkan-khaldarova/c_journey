#include <stdio.h>

int main(void) {
  float x;
  x = 1.5f;

  printf("%6d,%4d\n", 86, 1040);   /* |    86|,|1040| */
  printf("%12.5e\n", 30.253);      /* | 3.02530e+01| */
  printf("%.4f\n", 83.162);        /* |83.1620| */
  printf("%-6.2g\n", .0000009979); /* |1e-06| */

  // (a) Exponential notation; left-justified (size 8); 1 digit after decimal
  printf("%-8.1e\n", x);

  // (b) Exponential notation; right-justified (size 10); 6 digits after decimal
  printf("%10.6e\n", x);

  // (c) Fixed decimal notation; left-justified (size 8); 3 digits after decimal
  printf("%-8.3f\n", x);

  // (d) Fixed decimal notation; right-justified (size 6); no digits after
  // decimal
  printf("%6.0f\n", x);

  return 0;
}
