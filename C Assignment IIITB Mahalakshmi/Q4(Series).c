#include <stdio.h>

int main() {
    int n, i = 1;
    double sum = 0.0;

    printf("Enter n number: ");
    scanf("%d", &n);

    while (i <= n) {
        if (i % 2 == 0)
            sum -= 1.0 / i;
        else
            sum += 1.0 / i;
        i++;
    }

    printf("Sum of series: %.6f\n", sum);
    return 0;
}