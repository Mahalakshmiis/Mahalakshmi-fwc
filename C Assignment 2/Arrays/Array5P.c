#include <stdio.h>

int main() {
    int size;
    printf("Enter size of the array: ");
    scanf("%d", &size);

    if(size <= 0) {
        printf("Invalid size. Please enter a positive number.\n");
        return 1;
    }

    float array[size];  // Variable Length Array (VLA)

    // Taking input
    printf("Enter %d float values:\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%f", &array[i]);
    }

    // Printing elements
    printf("The array elements are:\n");
    for(int i = 0; i < size; i++) {
        printf("%.2f ", array[i]);
    }

    return 0;
}