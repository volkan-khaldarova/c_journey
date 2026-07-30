#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

  int temperature_readings[30][24] = {0};
  float sum = 0;
  float avarage = 0.0f;

  srand(time(NULL));

  for (int i = 0; i < 30; i++) {
    for (int j = 0; j < 24; j++) {
      temperature_readings[i][j] = (rand() % 26) + 10;
    }
  }

  for (int i = 0; i < 30; i++) {
    for (int j = 0; j < 24; j++) {
      sum += temperature_readings[i][j];
    }
  }

  avarage = sum / 720;

  printf("Avarage temperature is: %.2f\n", avarage);

  return EXIT_SUCCESS;
}
