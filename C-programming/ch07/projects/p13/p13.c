#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char ch;
    int char_count = 0;
    int word_count = 0;
    int in_word = 0;

    printf("Enter a sentence: ");

    /* Read characters one by one until a newline is encountered */
    while ((ch = getchar()) != '\n') {
        if (ch != ' ') {
            char_count++;
            /* If we transition from a space to a character, it's a new word */
            if (!in_word) {
                word_count++;
                in_word = 1;
            }
        } else {
            /* We hit a space, so we are no longer inside a word */
            in_word = 0;
        }
    }

    /* Prevent division by zero if the user just presses Enter */
    if (word_count > 0) {
        printf("Average word length: %.1f\n", (float)char_count / word_count);
    } else {
        printf("Average word length: 0.0\n");
    }

    return EXIT_SUCCESS;
}
