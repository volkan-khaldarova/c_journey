#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char initial, ch;

  printf("Enter a first and last name: ");

  /* 1. Skip leading spaces */
  while ((ch = getchar()) == ' ')
    ;

  /* 2. Save the first initial */
  initial = ch;

  /* 3. Skip the rest of the first name */
  while ((ch = getchar()) != ' ')
    ;

  /* 4. Skip spaces between first and last name */
  while ((ch = getchar()) == ' ')
    ;

  /* 5. Print the last name until a space or newline is encountered */
  while (ch != ' ' && ch != '\n') {
    printf("%c", ch);
    ch = getchar();
  }

  /* 6. Print the comma, initial, and period */
  printf(", %c.\n", initial);

  /* 7. Garbage disposal: clear the remaining buffer (like trailing spaces)
     to prevent bugs in the next iteration of the while(1) loop */
  while (ch != '\n') {
    ch = getchar();
  }

  return EXIT_SUCCESS;
}
