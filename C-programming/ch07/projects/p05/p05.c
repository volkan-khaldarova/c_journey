#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int ch;
  int sum = 0;

  printf("Enter a word: ");

  /*
   * Read characters one by one until the Enter key ('\n') is pressed.
   * Moving getchar() inside the condition prevents infinite loops.
   */
  while ((ch = getchar()) != '\n') {
    switch (toupper(ch)) {
    case 'A':
    case 'E':
    case 'I':
    case 'L':
    case 'N':
    case 'O':
    case 'R':
    case 'S':
    case 'T':
    case 'U':
      sum += 1;
      break;
    case 'D':
    case 'G':
      sum += 2;
      break;
    case 'B':
    case 'C':
    case 'M':
    case 'P':
      sum += 3;
      break;
    case 'F':
    case 'H':
    case 'V':
    case 'W':
    case 'Y':
      sum += 4;
      break;
    case 'K':
      sum += 5;
      break;
    case 'J':
    case 'X':
      sum += 8;
      break;
    case 'Q':
    case 'Z':
      sum += 10;
      break;
    default:
      /* Do nothing for non-alphabetic characters like spaces */
      break;
    }
  }

  printf("Scrabble value: %d\n", sum);

  return EXIT_SUCCESS;
}
