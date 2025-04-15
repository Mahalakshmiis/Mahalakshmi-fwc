#include <stdio.h>

int main() {
    int var = 10;
    int *ptr = &var;
    
    printf("Address of var: %p\n", &var);
    printf("Value of var: %d\n", var);
    printf("Size of var: %lu bytes\n", sizeof(var));
    
    printf("\nAddress stored in ptr: %p\n", ptr);
    printf("Value pointed by ptr: %d\n", *ptr);
    printf("Size of ptr: %lu bytes\n", sizeof(ptr));
    return 0;
}