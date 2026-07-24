#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int hours, minutes;
  char indicator;

  do {
    int status = scanf("%d:%d %c", &hours, &minutes, &indicator);

    while (getchar() != '\n')
      ;

    if (status != 3) {
      puts("Invalid input! Pleas enter a valid time (hours:minutes).");
      continue;
    }

    if ((status == 3) && (hours >= 1 && hours <= 12) &&
        (minutes >= 0 && minutes <= 59)) {
      break;
    }

  } while (1);

  if (toupper(indicator) == 'P' && hours < 12) {
    hours += 12;
  }

  if (toupper(indicator) == 'A' && hours == 12) {
    hours = 0;
  }

  int total_min = (hours * 60) + minutes;

  if (total_min <= 172) {
    puts("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.");
  } else if (total_min <= 531) {
    puts("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");
  } else if (total_min <= 631) {
    puts("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
  } else if (total_min <= 723) {
    puts("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");
  } else if (total_min <= 803) {
    puts("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.");
  } else if (total_min <= 892) {
    puts("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.");
  } else if (total_min <= 1042) {
    puts("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.");
  } else if (total_min <= 1222) {
    puts("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.");
  } else {
    puts("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.");
  }

  return EXIT_SUCCESS;
}
