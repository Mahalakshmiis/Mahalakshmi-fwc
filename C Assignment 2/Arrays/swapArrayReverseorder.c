#include <stdio.h>

void reverseSwap(int arr1[], int arr2[], int size) {
    int i = 0, j = size - 1;
    while(i < size) {
        int temp = arr1[i];
        arr1[i] = arr2[j];
        arr2[j] = temp;
        i++;
        j--;
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int size = sizeof(arr1)/sizeof(arr1[0]);
    
    reverseSwap(arr1, arr2, size);
    
    printf("Array1: ");
    for(int i = 0; i < size; i++)
        printf("%d ", arr1[i]);
    
    printf("\nArray2: ");
    for(int i = 0; i < size; i++)
        printf("%d ", arr2[i]);
    return 0;
}