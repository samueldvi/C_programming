#include <stdio.h>
#include <stdlib.h>

/*
 * Simple guessing game.
 * The user has a limited number of attempts to guess a secret number.
 */
int main(void) {
    const int secretNumber = 7;   // number to guess
    const int guessLimit = 3;     // maximum number of attempts
    int guess = 0;
    int guessCount = 0;

    /*
     * Loop continues until the user guesses the number
     * or runs out of attempts.
     */
    while (guess != secretNumber && guessCount < guessLimit) {
        printf("Guess the secret number (0-20). Attempts left: %d\n",
               guessLimit - guessCount);

        if (scanf("%d", &guess) != 1) {
            puts("Invalid input.");
            return EXIT_FAILURE;
        }

        guessCount++;
    }

    if (guess == secretNumber) {
        puts("You win!");
    } else {
        puts("You are out of guesses. Please try again.");
    }

    return EXIT_SUCCESS;
}
