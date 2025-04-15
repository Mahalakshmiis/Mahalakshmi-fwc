#include <stdio.h>

// Function to check if a year is a leap year
int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return 1;
    return 0;
}

// Function to validate a date
int isValidDate(int d, int m, int y) {
    if (y < 1 || m < 1 || m > 12 || d < 1)
        return 0;

    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30,
                         31, 31, 30, 31, 30, 31};

    // Adjust February if leap year
    if (m == 2 && isLeapYear(y))
        daysInMonth[2] = 29;

    if (d > daysInMonth[m])
        return 0;

    return 1;
}

int main() {
    int d, m, y;
    printf("Enter a date (dd mm yyyy): ");
    scanf("%d %d %d", &d, &m, &y);

    if (isValidDate(d, m, y))
        printf("The date is valid.\n");
    else
        printf("The date is invalid.\n");

    return 0;
}