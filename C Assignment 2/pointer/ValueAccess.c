#include <stdio.h>

int main() {
    int a = 5, b = 10, c = 15;
    int *ptr;

    ptr = &a;
    printf("Value of a using pointer: %d\n", *ptr);

    ptr = &b;
    printf("Value of b using pointer: %d\n", *ptr);

    ptr = &c;
    printf("Value of c using pointer: %d\n", *ptr);

    return 0;
}