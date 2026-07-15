#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int ch, vowels = 0;

  printf("Enter a sentence: ");
  while ((ch = getchar()) != '\n') {
    switch (toupper(ch)) {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
      vowels++;
      break;
    default:
      break;
    }
  }

  printf("Your sentence contains %d vowels.\n", vowels);
  return EXIT_SUCCESS;
}
