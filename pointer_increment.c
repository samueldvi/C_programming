#include <stdio.h>
#include <stdlib.h>

/*
 * Increments the integer value stored at the memory address
 * passed as argument.
 */
void increment(int *p) {
    (*p)++;  // Increment the value pointed to by p
}

int main(void) {

    /*
     * Declare an integer variable and a pointer
     * that stores its memory address.
     */
    int x = 10;
    int *p = &x;

    /*
     * Print the memory address of x.
     */
    printf("The memory address of x is: %p\n", (void *)&x);

    /*
     * Access the value stored at the memory address
     * using pointer dereferencing.
     */
    printf("The value stored at that address is: %d\n", *p);

    /*
     * Call the function passing the pointer.
     * The function modifies x directly via its address.
     */
    increment(p);

    printf(
        "After calling increment(p), the value is now: %d\n",
        *p
    );

    return EXIT_SUCCESS;
}
