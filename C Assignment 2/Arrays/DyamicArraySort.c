#include <stdio.h>
#include <stdlib.h>

void sortArray(int *arr, int size) {
    for(int i = 0; i < size-1; i++) {
        for(int j = 0; j < size-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    
    int *arr = (int*)malloc(size * sizeof(int));
    if(arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    printf("Enter %d elements:\n", size);
    for(int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    
    sortArray(arr, size);
    
    printf("Sorted array: ");
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    
    free(arr);
    return 0;
}