#include <stdio.h>
#include <stdlib.h>

int main(void) {

    /*
     * Open a file in write mode.
     * If the file does not exist, it will be created.
     * If it exists, its contents will be overwritten.
     */
    FILE *fpointer = fopen("myProgram.txt", "w");

    /*
     * Check if the file was opened successfully.
     */
    if (fpointer == NULL) {
        perror("Failed to open file");
        return EXIT_FAILURE;
    }

    /*
     * Write a line of text to the file.
     */
    fprintf(
        fpointer,
        "In this course, we learned the basics of C programming.\n"
    );

    /*
     * Close the file and release resources.
     */
    fclose(fpointer);

    return EXIT_SUCCESS;
}
