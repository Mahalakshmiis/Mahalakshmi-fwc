#include <stdio.h>

int main() {
    int n, num, prevNum, i = 0;

    printf("Enter n number: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("Enter first number: ");
        scanf("%d", &prevNum);
        i = 1;  
    }

    while (i < n) {
        printf("Enter next number: ");
        scanf("%d", &num);

        if (num > prevNum)
            printf("The given number is bigger than the previous number.\n");
        else if (num < prevNum)
            printf("The given number is smaller than the previous number.\n");

        prevNum = num; 
        i++;
    }

    return 0;
}