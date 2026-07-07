#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int user_hour, user_min, total_min;
  printf("Enter a 24-hour time: ");
  if (scanf("%d:%d", &user_hour, &user_min) != 2) {
    return EXIT_FAILURE;
  }

  total_min = (user_hour * 60) + user_min;

  // GECE YARISI DÜZELTMESİ: Gece 02:52'den (172. dakikadan) önce,
  // bir önceki günün son uçuşu (21:45) teknik olarak daha yakındır.
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
    // Burada hem 21:45 uçuşuna yakın olanları yakalarız,
    // hem de gece 23:59'a kadar olan süreyi kapsarız.
    puts("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.");
  }

  return EXIT_SUCCESS;
}
