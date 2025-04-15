#include <stdio.h>

int main() {
    // Declare three integer variables
    int num1, num2, num3;
    
    // Declare pointers to integer variables
    int *ptr1, *ptr2, *ptr3;

    // Input values for the three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Assign addresses of the variables to the pointers
    ptr1 = &num1;
    ptr2 = &num2;
    ptr3 = &num3;

    // Compare the values pointed to by the pointers to find the largest
    if (*ptr1 >= *ptr2 && *ptr1 >= *ptr3)
        printf("The largest number is: %d\n", *ptr1);
    else if (*ptr2 >= *ptr1 && *ptr2 >= *ptr3)
        printf("The largest number is: %d\n", *ptr2);
    else
        printf("The largest number is: %d\n", *ptr3);

    return 0;
}