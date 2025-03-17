#include <stdio.h>

int main() {
    int n, i = 1, j, marks, total, topper = 1;
    float percentage, maxPercentage = 0;

    printf("Enter n students: ");
    scanf("%d", &n);

    while (i <= n) {
        printf("Enter %d student 6 subjects marks:\n", i);
        total = 0;
        j = 0;

        while (j < 6) {
            scanf("%d", &marks);
            total += marks;
            j++;
        }

        percentage = (total / 600.0) * 100;
        printf("Student %d percentage is: %.2f%%\n", i, percentage);

        if (percentage > maxPercentage) {
            maxPercentage = percentage;
            topper = i;
        }

        i++;
    }

    printf("Topper student ID is %d\n", topper);
    return 0;
}