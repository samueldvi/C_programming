#include <stdio.h>
#include <stdlib.h>

/*
 * Simple program that reads a letter grade from input
 * and prints a corresponding message using a switch statement.
 */
int main(void) {
    char grade;  // stores the grade entered by the user

    // Prompt user for input
    printf("Enter your grade (A, B, C, D, F): ");

    // Read a single character, skipping any whitespace
    if (scanf(" %c", &grade) != 1) {
        puts("Invalid input.");
        return EXIT_FAILURE;
    }

    /*
     * Evaluate the grade using a switch statement.
     */
    switch (grade) {
        case 'A':
            puts("Excellent work!");
            break;

        case 'B':
            puts("Good job.");
            break;

        case 'C':
            puts("You passed.");
            break;

        case 'D':
            puts("You should put in more effort.");
            break;

        case 'F':
            puts("You failed. Study more and try again.");
            break;

        default:
            puts("Invalid grade entered.");
    }

    return EXIT_SUCCESS;
}
