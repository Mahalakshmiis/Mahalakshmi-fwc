#include <stdio.h>

int main() {
    int i, j;

    // Row 1: 0 spaces, 5 stars
    for (j = 0; j < 5; j++) {
        printf("*  ");
    }
    printf("\n");

    // Row 2: 3 spaces, 4 stars
    for (j = 0; j < 3; j++) {
        printf(" ");
    }
    for (j = 0; j < 4; j++) {
        printf("*  ");
    }
    printf("\n");

    // Rows 3 to 5: 13 spaces, stars decreasing from 3 to 1
    for (i = 3; i <= 5; i++) {
        for (j = 0; j < 13; j++) {
            printf(" ");
        }
        for (j = 0; j <= 5 - i; j++) {
            printf("*  ");
        }
        printf("\n");
    }

    return 0;
}