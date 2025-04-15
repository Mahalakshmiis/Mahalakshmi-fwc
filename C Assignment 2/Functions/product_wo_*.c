#include <stdio.h>

int product(int a, int b) {
    int result = 0;
    int positive = 1;

    if (b < 0) {
        b = -b;
        positive = -1;
    }

    for (int i = 0; i < b; i++)
        result += a;

    return positive * result;
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