
#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int day1, mounth1, year1, total_day1;
  int day2, mounth2, year2, total_day2;

  printf("Enter first date (mm/dd/yy): ");
  if (scanf("%d/%d/%d", &mounth1, &day1, &year1) !=
      3) { // mm/dd/yy sırasına dikkat!
    puts("Invalid input!");
    return EXIT_FAILURE;
  }

  printf("Enter second date (mm/dd/yy): ");
  if (scanf("%d/%d/%d", &mounth2, &day2, &year2) != 3) {
    puts("Invalid input!");
    return EXIT_FAILURE;
  }

  // Burada mounth1 kullandık (Hata düzeltildi)
  total_day1 = (year1 * 365) + (mounth1 * 30) + day1;
  total_day2 = (year2 * 365) + (mounth2 * 30) + day2;

  if (total_day1 == total_day2) {
    printf("Both dates are equal.\n");
  } else if (total_day1 > total_day2) {
    printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n", mounth2, day2,
           year2, mounth1, day1, year1);
  } else {
    printf("%02d/%02d/%02d is earlier than %02d/%02d/%02d\n", mounth1, day1,
           year1, mounth2, day2, year2);
  }

  return EXIT_SUCCESS;
}
