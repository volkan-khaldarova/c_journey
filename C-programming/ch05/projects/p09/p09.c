
#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int numarical_grade;

  printf("Enter the numarical grade: ");
  if (scanf("%d", &numarical_grade) != 1) {
    puts("Invalid input!");
    return EXIT_FAILURE;
  }

  // Sınır dışı not kontrolünüz mükemmel, aynen kalıyor.
  if (numarical_grade < 0 || numarical_grade > 100) {
    puts("Invalid numarical grade");
    return EXIT_FAILURE;
  }

  // Switch içine notun 10'a bölünmüş halini gönderiyoruz
  switch (numarical_grade / 10) {
  case 10:
  case 9:
    puts("Letter grade A");
    break;
  case 8:
    puts("Letter grade B");
    break;
  case 7:
    puts("Letter grade C");
    break;
  case 6:
    puts("Letter grade D");
    break;
  // 0 ile 5 arasındaki tüm durumlar F notuna çıkar
  case 5:
  case 4:
  case 3:
  case 2:
  case 1:
  case 0:
    puts("Letter grade F");
    break;
  default:
    puts("Something went wrong!");
  }

  return EXIT_SUCCESS;
}
