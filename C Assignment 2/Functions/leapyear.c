#include <stdio.h>

// Function to check leap year
int isLeapYear(int year) {
    if (year < 0) return 0;  // Invalid year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    else
        return 0;
}

int main() {
    int year;
    printf("Enter a year: ");
    if (scanf("%d", &year) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (isLeapYear(year))
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year.\n", year);

    return 0;
}