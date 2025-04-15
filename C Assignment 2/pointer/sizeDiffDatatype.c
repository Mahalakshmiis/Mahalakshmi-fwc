#include <stdio.h>

int main() {
    // Declare different pointer variables with different data types
    int *ptr_int;
    float *ptr_float;
    char *ptr_char;
    double *ptr_double;

    // Print the sizes of the pointer variables using sizeof operator
    printf("Size of int pointer: %zu bytes\n", sizeof(ptr_int));
    printf("Size of float pointer: %zu bytes\n", sizeof(ptr_float));
    printf("Size of char pointer: %zu bytes\n", sizeof(ptr_char));
    printf("Size of double pointer: %zu bytes\n", sizeof(ptr_double));

    return 0;
}