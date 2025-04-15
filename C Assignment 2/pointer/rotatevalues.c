#include <stdio.h>

int main() {
    // Declare three integer variables
    int x, y, z;

    // Declare pointers to integer variables
    int *ptr_x, *ptr_y, *ptr_z;

    // Input values for the three numbers
    printf("Enter three numbers (x, y, z): ");
    scanf("%d %d %d", &x, &y, &z);

    // Assign addresses of the variables to the pointers
    ptr_x = &x;
    ptr_y = &y;
    ptr_z = &z;

    // Rotate the values: x = y, y = z, z = x
    int temp = *ptr_x; // store the value of x temporarily
    *ptr_x = *ptr_y;   // assign the value of y to x
    *ptr_y = *ptr_z;   // assign the value of z to y
    *ptr_z = temp;     // assign the stored value of x to z

    // Print the rotated values
    printf("\nAfter rotation:\n");
    printf("x = %d\n", *ptr_x);
    printf("y = %d\n", *ptr_y);
    printf("z = %d\n", *ptr_z);

    return 0;
}