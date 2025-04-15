#include <stdio.h>

int main() {
    int i, j;

    // Row 1: 0 spaces, 5 stars
    j = 0;
    while (j < 5) {
        printf("*  ");
        j++;
    }
    printf("\n");

    // Row 2: 3 spaces, 4 stars
    j = 0;
    while (j < 3) {
        printf(" ");
        j++;
    }

    j = 0;
    while (j < 4) {
        printf("*  ");
        j++;
    }
    printf("\n");

    // Rows 3 to 5: 13 spaces, stars from 3 to 1
    i = 3;
    do {
        j = 0;
        while (j < 13) {
            printf(" ");
            j++;
        }

        j = 0;
        while (j <= 5 - i) {
            printf("*  ");
            j++;
        }

        printf("\n");
        i++;
    } while (i <= 5);

    return 0;
}