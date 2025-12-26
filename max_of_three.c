#include <stdio.h>

/*
 * Returns the maximum value among three integers.
 */
int max(int a, int b, int c) {
    int max = a;

    if (b > max) {
        max = b;
    }

    if (c > max) {
        max = c;
    }

    return max;
}

int main(void) {
    int num1, num2, num3;

    printf("Insert the first number: ");
    scanf("%d", &num1);

    printf("Insert the second number: ");
    scanf("%d", &num2);

    printf("Insert the third number: ");
    scanf("%d", &num3);

    printf("The largest number is %d\n", max(num1, num2, num3));

    return 0;
}

