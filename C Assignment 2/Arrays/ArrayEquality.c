#include <stdio.h>

int areArraysEqual(int arr1[], int arr2[], int size1, int size2) {
    if (size1 != size2)
        return 0;

    for (int i = 0; i < size1; i++) {
        if (arr1[i] != arr2[i])
            return 0;
    }
    return 1;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int result = areArraysEqual(arr1, arr2, size1, size2);

    if (result == 1)
        printf("Arrays are equal.\n");
    else
        printf("Arrays are not equal.\n");

    return 0;
}