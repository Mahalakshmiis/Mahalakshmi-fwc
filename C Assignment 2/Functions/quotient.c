#include <stdio.h>

int divide(int a, int b) {
    if (b == 0) return -999999;

    int quotient = 0;
    int sign = 1;

    if (a < 0) {
        a = -a;
        sign *= -1;
    }

    if (b < 0) {
        b = -b;
        sign *= -1;
    }

    while (a >= b) {
        a -= b;
        quotient++;
    }

    return sign * quotient;
}

int main() {
    int a, b;
    printf("Enter dividend and divisor: ");
    if (scanf("%d %d", &a, &b) != 2 || b == 0) {
        printf("Invalid input or divide by zero.\n");
        return 1;
    }

    printf("Quotient = %d\n", divide(a, b));
    return 0;
}