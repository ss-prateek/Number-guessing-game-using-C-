/*
 * Random Number Guess Game
 *
 * The program chooses a random number from 1 to 100. The player keeps guessing
 * until they find it, and the game gives "higher" or "lower" hints after each
 * attempt.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    const int min = 1;
    const int max = 100;
    int secret_number;
    int guessed_number;
    int number_of_guesses = 0;

    srand((unsigned int)time(NULL));
    secret_number = (rand() % (max - min + 1)) + min;

    printf("=====================================\n");
    printf("       Random Number Guess Game       \n");
    printf("=====================================\n");
    printf("I picked a number between %d and %d.\n", min, max);
    printf("Can you guess it?\n\n");

    while (1) {
        printf("Enter your guess: ");

        if (scanf("%d", &guessed_number) != 1) {
            printf("Please enter a valid whole number.\n");

            while (getchar() != '\n') {
            }

            continue;
        }

        number_of_guesses++;

        if (guessed_number > secret_number) {
            printf("Lower number please!\n\n");
        } else if (guessed_number < secret_number) {
            printf("Higher number please!\n\n");
        } else {
            printf("\nCongrats! You guessed the number in %d guesses.\n", number_of_guesses);
            break;
        }
    }

    return 0;
}
