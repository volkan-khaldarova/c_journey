#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int num1, denom1, num2, denom2, result_num, result_denom, choice;
  int m, n, remainder;
  char next_char;

  /* Infinite loop to keep the program running until the user chooses to exit */
  while (1) {
    printf("\n");
    puts("Press 1 for Addition");
    puts("Press 2 for Subtraction");
    puts("Press 3 for Division");
    puts("Press 4 for Multiplication");
    puts("Press 0 for Exit");

    /* Validate menu choice input */
    if (scanf("%d", &choice) != 1) {
      puts("Invalid input! Please enter a number.");

      /* The garbage disposal loop: read characters until we hit Enter (\n) */
      while (getchar() != '\n')
        ;
      continue;
    }

    /* Check if there are extra characters immediately after the menu number */
    next_char = getchar();
    if (next_char != '\n') {
      puts("Invalid input! No extra characters allowed.");

      while (next_char != '\n') {
        next_char = getchar();
      }
      continue;
    }

    /* Break out of the loop and end the program if the user chooses 0 */
    if (choice == 0) {
      break;
    }

    /* If the user enters a number outside 1-4, warn them and restart the loop
     */
    if (choice < 1 || choice > 4) {
      puts("Invalid choice! Please select a valid option.");
      continue;
    }

    /* Read fractions */
    printf("Enter two fractions separated by space: ");
    if (scanf("%d/%d %d/%d", &num1, &denom1, &num2, &denom2) != 4) {
      puts("Invalid input format!");

      /* Clear the buffer so we don't crash, and go back to the menu */
      while (getchar() != '\n')
        ;
      continue;
    }

    /* SAFETY CHECK 1: Denominators cannot be zero */
    if (denom1 == 0 || denom2 == 0) {
      puts("Mathematical Error: Denominator cannot be zero!");
      continue;
    }

    /* SAFETY CHECK 2: For division, the second numerator cannot be zero
       because it becomes the denominator when inverted */
    if (choice == 3 && num2 == 0) {
      puts("Mathematical Error: Cannot divide by zero!");
      continue;
    }

    switch (choice) {
    case 1:
      /* Calculate the numerator and denominator using cross-multiplication */
      result_num = (num1 * denom2) + (num2 * denom1);
      result_denom = denom1 * denom2;

      /* Store original values in temporary variables to find the GCD */
      m = result_num;
      n = result_denom;
      remainder = m % n;

      /* Euclidean algorithm to find the Greatest Common Divisor (GCD) */
      while (remainder != 0) {
        m = n;
        n = remainder;
        remainder = m % n;
      }

      printf("Result is: %d/%d\n", result_num / n, result_denom / n);
      break;

    case 2:
      /* Calculate the numerator and denominator using cross-multiplication */
      result_num = (num1 * denom2) - (num2 * denom1);
      result_denom = denom1 * denom2;

      /* Store original values in temporary variables to find the GCD */
      m = result_num;
      n = result_denom;
      remainder = m % n;

      /* Euclidean algorithm to find the Greatest Common Divisor (GCD) */
      while (remainder != 0) {
        m = n;
        n = remainder;
        remainder = m % n;
      }

      printf("Result is: %d/%d\n", result_num / n, result_denom / n);
      break;

    case 3:
      /* Division: Invert the second fraction and multiply */
      result_num = num1 * denom2;
      result_denom = denom1 * num2;

      /* Store original values in temporary variables to find the GCD */
      m = result_num;
      n = result_denom;
      remainder = m % n;

      /* Euclidean algorithm to find the Greatest Common Divisor (GCD) */
      while (remainder != 0) {
        m = n;
        n = remainder;
        remainder = m % n;
      }

      printf("Result is: %d/%d\n", result_num / n, result_denom / n);
      break;

    case 4:
      /* Multiplication: Multiply numerators and denominators directly */
      result_num = num1 * num2;
      result_denom = denom1 * denom2;

      /* Store original values in temporary variables to find the GCD */
      m = result_num;
      n = result_denom;
      remainder = m % n;

      /* Euclidean algorithm to find the Greatest Common Divisor (GCD) */
      while (remainder != 0) {
        m = n;
        n = remainder;
        remainder = m % n;
      }

      printf("Result is: %d/%d\n", result_num / n, result_denom / n);
      break;
    }
  }

  return EXIT_SUCCESS;
}
