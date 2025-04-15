#include <stdio.h>

int main() {
    int i = 1, count = 0;

    while (i <= 5) {
        printf("* ");
        count++;

        if (count == i) {
            printf("\n");
            i++;
            count = 0;
        }
    }

    return 0;
}