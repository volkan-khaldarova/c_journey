#include<stdio.h>

int main() {

  int apple_quantity;
  double apple_price;
  double apple_review = 0.52;
  int apple_review_display;
  char apple_location;

  apple_price = 1.49;
  apple_location = 'F';
  apple_quantity = 23;
  apple_review_display = (int) (apple_review * 100);

  /* Put all your code above this and if you declare your 
  variables using the given names and types there is no 
  need to change any of the code below. */

 
printf("An apple cost: $%.2f, there are %d in inventory found in section: %c and your customers gave it an average review of %d%%!\n", apple_price, apple_quantity, apple_location, apple_review_display);


  return 0;
}
