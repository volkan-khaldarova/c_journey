#include <stdio.h>
#include <stdlib.h>

int main(void) {

  char chess_board[8][8] = {"rnbqkbnr", "pppppppp", "........", "........",
                            "........", "........", "PPPPPPPP", "RNBQKBNR"};

  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      printf("%c", chess_board[i][j]);
    }
    printf("\n");
  }

  return EXIT_SUCCESS;
}
