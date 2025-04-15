#include <stdio.h>

int main() {
    // Declare an integer variable
    int var = 10;
    
    // Declare 3 pointer variables of integer type
    int *ptr1, *ptr2, *ptr3;

    // Assign the address of the integer variable to all three pointers
    ptr1 = &var;
    ptr2 = &var;
    ptr3 = &var;

    // Print the variable value using indirection on each pointer variable
    printf("Initial value of var using pointers:\n");
    printf("ptr1: %d\n", *ptr1);
    printf("ptr2: %d\n", *ptr2);
    printf("ptr3: %d\n", *ptr3);
    
    // Change the variable value directly
    var = 20;

    // Check the values of each of the pointers after changing the variable value directly
    printf("\nAfter changing var directly to 20:\n");
    printf("Value of var: %d\n", var);
    printf("ptr1: %d\n", *ptr1);
    printf("ptr2: %d\n", *ptr2);
    printf("ptr3: %d\n", *ptr3);

    // Change the variable value using each pointer
    *ptr1 = 30;
    *ptr2 = 40;
    *ptr3 = 50;

    // Print the variable value and indirected values of all pointers every time
    printf("\nAfter changing var using each pointer:\n");
    printf("Value of var: %d\n", var);
    printf("ptr1: %d\n", *ptr1);
    printf("ptr2: %d\n", *ptr2);
    printf("ptr3: %d\n", *ptr3);

    return 0;
}