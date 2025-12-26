#include <stdio.h>
#include <stdlib.h>

/*
 * Simple calculator program.
 * Reads two numbers and an operator from standard input,
 * then performs the selected arithmetic operation.
 */
int main(void) {
    double num1, num2;   // operands
    char op;             // operator selected by the user

    // Read first number
    printf("Please enter your first number: ");
    if (scanf("%lf", &num1) != 1) {
        puts("Invalid input for the first number.");
        return EXIT_FAILURE;
    }

    // Read operator (+, -, *, /)
    printf("Digit the operator you want to use (+, -, *, /): ");
    if (scanf(" %c", &op) != 1) {
        puts("Invalid input for the operator.");
        return EXIT_FAILURE;
    }

    // Read second number
    printf("Now enter the second number: ");
    if (scanf("%lf", &num2) != 1) {
        puts("Invalid input for the second number.");
        return EXIT_FAILURE;
    }

    /*
     * Select the operation to perform.
     * A switch statement is used to avoid if/else chains.
     */
    switch (op) {
        case '+':
            printf("The result is %.4f\n", num1 + num2);
            break;

        case '-':
            printf("The result is %.4f\n", num1 - num2);
            break;

        case '*':
            printf("The result is %.4f\n", num1 * num2);
            break;

        case '/':
            // Prevent division by zero
            if (num2 == 0.0) {
                puts("Error: division by zero is not allowed.");
                return EXIT_FAILURE;
            }
            printf("The result is %.4f\n", num1 / num2);
            break;

        // Handle unsupported operators
        default:
            puts("Invalid operator. Please use one of: + - * /");
            return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
