#include <stdio.h>

int main() {
    int base, exp, result = 1, i = 0;

    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exp);

    while (i < exp) {
        result *= base;
        i++;
    }

    printf("%d to the power of %d -> %d\n", base, exp, result);
    return 0;
}