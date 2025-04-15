#include <stdio.h>

int countMaxRepetitions(int arr[], int size) {
    int max = arr[0], count = 0;

    // Find the maximum element
    for (int i = 1; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    // Count occurrences of the maximum element
    for (int i = 0; i < size; i++) {
        if (arr[i] == max)
            count++;
    }

    return count;
}

int main() {
    int array[] = {10, 14, 16, 10, 10, 16, 14, 14, 16, 16};
    int size = sizeof(array) / sizeof(array[0]);

    int count = countMaxRepetitions(array, size);
    printf("Biggest number is repeated %d times.\n", count);

    return 0;
}