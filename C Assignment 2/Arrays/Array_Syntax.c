#include <stdio.h>

int main() {
    // 1. Valid – default initializes to 0
    int arr1[5] = {}; 
    printf("Size of arr1: %lu bytes\n", sizeof(arr1));
    for (int i = 0; i < 5; i++) printf("%d ", arr1[i]);  // all 0

    // 2. Valid – but floats will be truncated
    int arr2[10] = {2.4, 5.6, 7.3};  
    printf("\n\nSize of arr2: %lu bytes\n", sizeof(arr2));
    for (int i = 0; i < 10; i++) printf("%d ", arr2[i]);  // will print: 2 5 7 0 0 ...

    // 3.  Error – too many initializers
    // int arr3[3] = {1,2,3,4,5}; //  Compilation error: too many initializers

    // 4.  Error – size cannot be 0 in standard C
    // int arr4[0] = {}; //  Compilation error: zero or negative size

    // 5.  Error – same as above
    // int arr5[0] = {1,2,3,4,5}; //  Compilation error

    // 6.  Error – empty initializer with no size
    // int arr6[] = {}; //  Compilation error: empty initializer list

    // 7.  Error – invalid size using character constant
    // int arr7['a']; //  Compilation error: ISO C forbids variable-size array ‘arr7’

    return 0;
}