#include <stdio.h>

int power(int a, int n) {
    if (n < 0) return -1;
    int result = 1;
    for (int i = 0; i < n; i++)
        result *= a;
    return result;
}

int main() {
    int a, n;
    printf("Enter base and exponent: ");
    if (scanf("%d %d", &a, &n) != 2 || n < 0) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("%d^%d = %d\n", a, n, power(a, n));
    return 0;
}