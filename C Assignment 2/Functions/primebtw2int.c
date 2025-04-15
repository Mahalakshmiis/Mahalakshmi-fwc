#include <stdio.h>

int isPrime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0) return 0;
    return 1;
}

int main() {
    int low, high;
    printf("Enter two integers: ");
    if (scanf("%d %d", &low, &high) != 2 || low >= high) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Prime numbers between %d and %d are: ", low, high);
    for (int i = low + 1; i < high; i++)
        if (isPrime(i)) printf("%d ", i);

    return 0;
}