#include <stdio.h>

int main() {
    int n, sum = 0, num, i = 0;

    printf("Enter n number: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    while (i < n) {
        scanf("%d", &num);
        sum += num;
        i++;
    }

    printf("Sum: %d\n", sum);
    return 0;
}