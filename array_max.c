#include <stdio.h>
#include <stdlib.h>

int main(void) {

    /* 
     * One-dimensional array containing integer values.
     * Used to demonstrate how to find the maximum element in an array.
     */
    int myNumbers[] = {63, 95, 80, 23, 93, 1};

    /*
     * Calculate the number of elements in the array
     * to avoid hardcoding the array size.
     */
    int size = sizeof(myNumbers) / sizeof(myNumbers[0]);

    /*
     * Initialize max with the first element of the array.
     * This avoids using arbitrary values.
     */
    int max = myNumbers[0];

    /*
     * Iterate through the array starting from index 1
     * and update max whenever a larger value is found.
     */
    for (int i = 1; i < size; i++) {
        if (myNumbers[i] > max) {
            max = myNumbers[i];
        }
    }

    /*
     * Print the maximum value found in the array.
     */
    printf("The largest number in the array is %d\n", max);

    return EXIT_SUCCESS;
}
