#include <stdio.h>

int main() {
    int start, end, i;

    printf("Enter two numbers: ");
    scanf("%d %d", &start, &end);

    printf("Even numbers: ");
    i = start;
    while (i <= end) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i++; // Increment to move to the next number
    }

    printf("\nOdd numbers: ");
    i = start;
    while (i <= end) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
        i++; // Increment to move to the next number
    }

    printf("\n"); // New line for better formatting
    return 0;
}