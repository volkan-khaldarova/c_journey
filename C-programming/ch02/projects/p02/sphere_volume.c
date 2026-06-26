#include <stdio.h>
#define PI 3.14159265f

int main(void) {
  float radius;
  float volume;

  printf("Enter the radius of the sphere: ");
  if (scanf("%f", &radius) != 1) {
    printf("Invalid input.\n");
    return (1);
  }

  /*
   * Formul: v = 4/3 * PI * r^3
   */
  volume = (4.0f / 3.0f) * PI * (radius * radius * radius);
  printf("Volume of the sphere with radius %.2f: %.2f\n", radius, volume);
  return (0);
}
