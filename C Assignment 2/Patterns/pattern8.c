#include <stdio.h>

int main() {
    int i, j, num;

    for (i = 1; i <= 5; i++) {
        num = 1; // Start with 1 for each row
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num = 1 - num; // Toggle between 1 and 0
        }
        printf("\n");
    }

    return 0;
}