#include <stdio.h>

int main() {
    int arr[10];
    int i, max, min, maxIndex = 0, minIndex = 0;

    // Input 10 elements
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Print array
    printf("\nThe array elements are:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    // Initialize max and min
    max = min = arr[0];

    // Find max, min and their indexes
    for (i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxIndex = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            minIndex = i;
        }
    }

    // Print results
    printf("\n\nMaximum value: %d at index %d", max, maxIndex);
    printf("\nMinimum value: %d at index %d\n", min, minIndex);

    return 0;
}