#include <stdio.h>

int isLeapYear(int year) {
    if (year < 0) return 0;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    else
        return 0;
}

int getDaysInMonth(int month, int year) {
    if (month < 1 || month > 12 || year < 0)
        return -1;

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return isLeapYear(year) ? 29 : 28;
        default:
            return -1;
    }
}

int main() {
    int month, year, days;

    printf("Enter month (1-12): ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

    days = getDaysInMonth(month, year);

    if (days == -1)
        printf("Invalid input.\n");
    else
        printf("Number of days: %d\n", days);

    return 0;
}