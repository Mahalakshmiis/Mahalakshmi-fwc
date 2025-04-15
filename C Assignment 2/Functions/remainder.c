#include <stdio.h>

int remainderFunc(int a, int b) {
    if (b == 0) return -999999;

    int sign = (a < 0) ? -1 : 1;
    int tempA = (a < 0) ? -a : a;
    int tempB = (b < 0) ? -b : b;

    while (tempA >= tempB) {
        tempA -= tempB;
    }

    return sign * tempA;
}

int main() {
    int a, b;
    printf("Enter dividend and divisor: ");
    if (scanf("%d %d", &a, &b) != 2 || b == 0) {
        printf("Invalid input or divide by zero.\n");
        return 1;
    }

    printf("Remainder = %d\n", remainderFunc(a, b));
    return 0;
}