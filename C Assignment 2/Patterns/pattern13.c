#include <stdio.h>

int main() {
    int j;

    // Row 1
    for (j = 1; j <= 14; j++) printf(" ");
    printf("*\n");

    // Row 2
    for (j = 1; j <= 14; j++) printf(" ");
    for (j = 1; j <= 3; j++) printf("*  ");
    printf("\n");

    // Row 3
    for (j = 1; j <= 14; j++) printf(" ");
    for (j = 1; j <= 5; j++) printf("*  ");
    printf("\n");

    // Row 4
    for (j = 1; j <= 4; j++) printf(" ");
    for (j = 1; j <= 7; j++) printf("*  ");
    printf("\n");

    // Row 5
    for (j = 1; j <= 0; j++) printf(" ");  // no space
    for (j = 1; j <= 9; j++) printf("*  ");
    printf("\n");

    // Row 6
    for (j = 1; j <= 4; j++) printf(" ");
    for (j = 1; j <= 7; j++) printf("*  ");
    printf("\n");

    // Row 7
    for (j = 1; j <= 14; j++) printf(" ");
    for (j = 1; j <= 5; j++) printf("*  ");
    printf("\n");

    // Row 8
    for (j = 1; j <= 14; j++) printf(" ");
    for (j = 1; j <= 3; j++) printf("*  ");
    printf("\n");

    // Row 9
    for (j = 1; j <= 14; j++) printf(" ");
    printf("*\n");

    return 0;
}