#include <stdio.h>

int product(int a, int b) {
    int result = 0;
    for (int i = 0; i < abs(b); i++)
        result += a;
    return (b < 0) ? -result : result;
}

int main() {
    int a, b;
    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Product = %d\n", product(a, b));
    return 0;
}