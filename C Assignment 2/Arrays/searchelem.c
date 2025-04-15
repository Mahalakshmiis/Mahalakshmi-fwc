#include <stdio.h>

int search(int arr[], int size, int element) {
    int i = 0;
    while(i < size) {
        if(arr[i] == element)
            return i;
        i++;
    }
    return -1;
}

int main() {
    int arr[10] = {1, 5, 8, 12, 15, 20, 25, 30, 35, 40};
    int element, index;
    
    printf("Enter element to search: ");
    scanf("%d", &element);
    
    index = search(arr, 10, element);
    if(index != -1)
        printf("Element found at index %d\n", index);
    else
        printf("Element not found\n");
    return 0;
}