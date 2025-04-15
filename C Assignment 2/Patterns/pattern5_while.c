#include <stdio.h>

int main() {
    int i = 1, j;

    while (i <= 5) {
        j = 1;

        // Leading spaces
        if (i <= 3) {
            while (j <= 6) {
                printf(" ");
                j++;
            }
        } else if (i == 4) {
            while (j <= 2) {
                printf(" ");
                j++;
            }
        }

        // Stars
        j = 1;
        int stars = (i == 5) ? 6 : i;
        while (j <= stars) {
            printf("*  ");
            j++;
        }

        printf("\n");
        i++;
    }

    return 0;
}