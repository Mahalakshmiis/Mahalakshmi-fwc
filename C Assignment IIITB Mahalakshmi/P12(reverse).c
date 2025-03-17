#include <stdio.h>

int main() {
    int start, end;

    printf("Enter two numbers: ");
    scanf("%d %d", &start, &end);

    while (end >= start) {
        printf("%d ", end);
        end--;
    }
    printf("\n");
    return 0;
}