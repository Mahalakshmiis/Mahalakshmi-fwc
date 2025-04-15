#include <stdio.h>

int main() {
    int arr[100];

    // Assign numbers 1 to 100
    for (int i = 0; i < 100; i++) {
        arr[i] = i + 1;
    }

    // Print all numbers
    printf("All numbers from 1 to 100:\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Print even numbers
    printf("\nEven numbers:\n");
    for (int i = 0; i < 100; i++) {
        if (arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }
    printf("\n");

    // Print odd numbers
    printf("\nOdd numbers:\n");
    for (int i = 0; i < 100; i++) {
        if (arr[i] % 2 != 0)
            printf("%d ", arr[i]);
    }
    printf("\n");

    // Add 5 to each element and print
    printf("\nEach element after adding 5 (6 to 105):\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", arr[i] + 5);
    }
    printf("\n");

    return 0;
}