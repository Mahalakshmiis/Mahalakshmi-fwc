#include <stdio.h>

int main() {
    int i, j;

    // Row 1
    for (j = 1; j <= 6; j++) printf(" ");
    printf("*  \n");

    // Row 2
    for (j = 1; j <= 6; j++) printf(" ");
    for (j = 1; j <= 2; j++) printf("*  ");
    printf("\n");

    // Row 3
    for (j = 1; j <= 6; j++) printf(" ");
    for (j = 1; j <= 3; j++) printf("*  ");
    printf("\n");

    // Row 4
    for (j = 1; j <= 2; j++) printf(" ");
    for (j = 1; j <= 4; j++) printf("*  ");
    printf("\n");

    // Row 5
    for (j = 1; j <= 6; j++) printf("*  ");
    printf("\n");

    return 0;
}