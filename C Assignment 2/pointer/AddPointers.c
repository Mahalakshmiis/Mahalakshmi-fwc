#include <stdio.h>

int main() {
    int a, b, sum;
    int *ptr1 = &a, *ptr2 = &b;
    
    printf("Enter two numbers: ");
    scanf("%d %d", ptr1, ptr2);
    
    sum = *ptr1 + *ptr2;
    printf("Sum: %d\n", sum);
    return 0;
}