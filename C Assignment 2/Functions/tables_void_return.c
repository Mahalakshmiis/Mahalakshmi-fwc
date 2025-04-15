#include <stdio.h>

// Function to print multiplication table
void printMultiplicationTable(int num) {
    if (num < 0) {
        printf("Invalid input. Please enter a non-negative number.\n");
        return;  // early exit for invalid input
    }

    printf("Multiplication table for %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

int main() {
    int number;
    printf("Enter a number: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printMultiplicationTable(number);
    return 0;
}


