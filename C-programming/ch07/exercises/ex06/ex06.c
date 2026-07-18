#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char days_in_a_month = 31;
  short days_in_a_year = 366;
  short minutes_in_a_day = 1440;
  long seconds_in_a_day = 86400;

  printf("Days in a month is: %d\n", days_in_a_month);
  printf("Days in a year is: %hd\n", days_in_a_year);
  printf("Minutes in a day is: %hd\n", minutes_in_a_day);
  printf("Seconds in a day is: %ld\n", seconds_in_a_day);

  return EXIT_SUCCESS;
}
