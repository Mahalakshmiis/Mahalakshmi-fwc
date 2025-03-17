#include <stdio.h>

int main() {
    int n, num, i = 0;

    printf("Enter n number: ");
    scanf("%d", &n);

    while (i < n) {
        printf("Enter x value: ");
        scanf("%d", &num);

        if (num % 2 == 0)
            printf("The given number %d is EVEN.\n", num);
        else
            printf("The given number %d is ODD.\n", num);

        i++;
    }

    return 0;
}