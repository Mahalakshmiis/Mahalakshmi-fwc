#include <stdio.h>

int main() {
    int n, num, smallest, i = 1;

    printf("Enter n number: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    scanf("%d", &smallest); // Read first number

    while (i < n) {
        scanf("%d", &num);
        if (num < smallest) {
            smallest = num;
        }
        i++;
    }

    printf("The smallest number is %d\n", smallest);
    return 0;
}