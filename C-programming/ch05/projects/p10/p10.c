
#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int number, tens, ones;

  printf("Enter a two-digit number: ");
  if (scanf("%d", &number) != 1) {
    puts("Invalid input!");
    return EXIT_FAILURE;
  }

  // İki basamaklı sayı kontrolü
  if (number < 10 || number > 99) {
    puts("Error: Please enter a two-digit number between 10 and 99.");
    return EXIT_FAILURE;
  }

  // Basamakları ayrıştırma
  tens = number / 10;
  ones = number % 10;

  printf("You entered the number ");

  // 1. ÖZEL DURUM: 10 - 19 Arası Sayılar
  if (tens == 1) {
    switch (number) {
    case 10:
      puts("ten.");
      break;
    case 11:
      puts("eleven.");
      break;
    case 12:
      puts("twelve.");
      break;
    case 13:
      puts("thirteen.");
      break;
    case 14:
      puts("fourteen.");
      break;
    case 15:
      puts("fifteen.");
      break;
    case 16:
      puts("sixteen.");
      break;
    case 17:
      puts("seventeen.");
      break;
    case 18:
      puts("eighteen.");
      break;
    case 19:
      puts("nineteen.");
      break;
    }
  }
  // 2. STANDART DURUM: 20 - 99 Arası Sayılar
  else {
    // İlk Aşama: Onlar Basamağını Yazdır
    switch (tens) {
    case 2:
      printf("twenty");
      break;
    case 3:
      printf("thirty");
      break;
    case 4:
      printf("forty");
      break;
    case 5:
      printf("fifty");
      break;
    case 6:
      printf("sixty");
      break;
    case 7:
      printf("seventy");
      break;
    case 8:
      printf("eighty");
      break;
    case 9:
      printf("ninety");
      break;
    }

    // İkinci Aşama: Birler Basamağını Yazdır
    if (ones != 0) {
      printf("-"); // Eğer sayı 40, 50 değilse araya tire koyar
      switch (ones) {
      case 1:
        printf("one");
        break;
      case 2:
        printf("two");
        break;
      case 3:
        printf("three");
        break;
      case 4:
        printf("four");
        break;
      case 5:
        printf("five");
        break;
      case 6:
        printf("six");
        break;
      case 7:
        printf("seven");
        break;
      case 8:
        printf("eight");
        break;
      case 9:
        printf("nine");
        break;
      }
    }

    printf(".\n"); // Cümlenin sonuna nokta koyar
  }

  return EXIT_SUCCESS;
}
