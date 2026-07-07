#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int hour, minute;

  // Prompt the user for a 24-hour time input
  printf("Enter a 24-hour time (hour:minute): ");

  // Validate that exactly 2 inputs were read successfully
  // Also check if hour and minute are within valid time ranges
  if (scanf("%d:%d", &hour, &minute) != 2 || hour < 0 || hour > 23 ||
      minute < 0 || minute > 59) {
    puts("Invalid input");
    return EXIT_FAILURE;
  }

  // Determine AM or PM based on the original 24-hour value
  const char *period = (hour >= 12) ? "PM" : "AM";

  // Convert hour to 12-hour format using modulo
  int display_hour = hour % 12;

  // Handle the midnight and noon edge case where modulo returns 0
  if (display_hour == 0) {
    display_hour = 12;
  }

  // Print the result
  // %02d ensures that single-digit minutes are padded with a leading zero
  // (e.g., 05)
  printf("Equivalent 12-hour time: %d:%02d %s\n", hour, minute, period);

  return EXIT_SUCCESS;
}
