#include <stdio.h>
#include <stdlib.h>

int main(void) {

    /*
     * Two-dimensional integer array (3 rows x 2 columns).
     * Each row represents a pair of related values.
     */
    int nums[3][2] = {
        {80, 20},
        {34, 93},
        {12, 67}
    };

    /*
     * Iterate over rows and columns to print
     * each element of the 2D array in matrix form.
     */
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", nums[i][j]);
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}
