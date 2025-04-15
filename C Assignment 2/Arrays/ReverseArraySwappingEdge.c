#include <stdio.h>

void reverseArray(int arr[], int size) {
    int start = 0, end = size - 1, temp;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int size = sizeof(array1) / sizeof(array1[0]);

    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array1[i]);
    }

    reverseArray(array1, size);

    printf("\nReversed Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array1[i]);
    }

    return 0;
}