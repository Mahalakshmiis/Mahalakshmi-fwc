#include <stdio.h>

int main() {
    int start, end;

    printf("Enter two numbers: ");
    scanf("%d %d", &start, &end);

    while (start <= end) {
        printf("%d ", start);
        start++;
    }
    printf("\n");
    return 0;
}