#include <stdio.h>

void swap(int a, int b) {
    printf("Before swapping: a = %d, b = %d\n", a, b);

    int temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);
}

int main() {
    int x, y;

    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    swap(x, y);

    return 0;
}