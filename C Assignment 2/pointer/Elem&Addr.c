#include <stdio.h>

int main() {
    // Declare and initialize an integer array of size 10
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    // Declare a pointer to an integer
    int *ptr;

    // Print the addresses of each element of the array
    printf("Addresses of array elements:\n");
    for (int i = 0; i < 10; i++) {
        ptr = &arr[i]; // Assign the address of the current array element to the pointer
        printf("Address of arr[%d]: %p\n", i, ptr);
    }

    // Print the values stored in each element using indirection
    printf("\nValues of array elements using indirection:\n");
    for (int i = 0; i < 10; i++) {
        ptr = &arr[i]; // Assign the address of the current array element to the pointer
        printf("Value of arr[%d]: %d\n", i, *ptr); // Use indirection to access the value
    }

    return 0;
}