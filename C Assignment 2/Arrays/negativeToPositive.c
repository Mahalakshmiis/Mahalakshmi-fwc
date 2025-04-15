#include <stdio.h>

void convertToPositive(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            arr[i] = -arr[i];
        }
    }
}

int main() {
    int arr[] = {-5, 3, -2, 7, -8, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    convertToPositive(arr, size);

    printf("\nModified Array (All Positives): ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}