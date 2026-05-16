#include<stdio.h>
#include<string.h>

void print_revers(char* s) {

  size_t len = strlen(s);

  char* t = s + len - 1;

  while(t >= s) {
    printf("%c", *t);
    t = t - 1;
    puts("");
  }
}

int main() {
  
  char name[] = "Volkan";

  print_revers(name);

  return 0;
}
