#include <stdio.h>

int main() {
    int a, b, result = 0, i = 0;

    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    while (i < b) {
        result += a;
        i++;
    }

    printf("Result is %d.\n", result);
    return 0;
}