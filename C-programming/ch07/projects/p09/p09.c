#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int hour, min;
  char indicator;

  do {
    printf("Enter a 12-hour time: ");

    int status = scanf("%d:%d %c %*c", &hour, &min, &indicator);

    while (getchar() != '\n')
      ;

    if ((status != 3) || (hour > 12) || (hour < 0) || (min < 0 || min > 59) ||
        (indicator != 'a' && indicator != 'A' && indicator != 'p' &&
         indicator != 'P')) {
      puts("Invalid input! Please enter a valid time based on 12-hour time, "
           "for example 9:11 PM.");
      continue;
    }

    break;
  } while (1);

  if (toupper(indicator) == 'P' && hour < 12) {
    hour += 12;
  }

  if (toupper(indicator) == 'A' && hour == 12) {
    hour = 0;
  }

  printf("Equivalent 24-hour time: %d:%02d\n", hour, min);

  return EXIT_SUCCESS;
}
