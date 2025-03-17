#include <stdio.h>

int main() {
    int n, num, i = 1;

    printf("Enter n number: ");
    scanf("%d", &n);

    while (n--) {
        printf("Enter x number: ");
        scanf("%d", &num);

        i = 1;
        while (i <= 10) {
            printf("%d * %d = %d\n", num, i, num * i);
            i++;
        }
    }
    return 0;
}