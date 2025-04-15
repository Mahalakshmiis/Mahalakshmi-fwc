#include <stdio.h>

int main() {
    int i = 1, j;

    do {
        j = 1;

        // Leading spaces
        if (i <= 3) {
            do {
                if (j > 6) break;
                printf(" ");
                j++;
            } while (1);
        } else if (i == 4) {
            do {
                if (j > 2) break;
                printf(" ");
                j++;
            } while (1);
        }

        // Stars
        j = 1;
        int stars = (i == 5) ? 6 : i;
        do {
            if (j > stars) break;
            printf("*  ");
            j++;
        } while (1);

        printf("\n");
        i++;
    } while (i <= 5);

    return 0;
}