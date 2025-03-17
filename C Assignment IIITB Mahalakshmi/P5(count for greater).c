#include <stdio.h>

int main() {
    int n, num, prev, count = 0, i = 1;

    printf("Enter n number: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    
    scanf("%d", &prev); 

    while (i < n) {
        scanf("%d", &num);
        if (num > prev) { 
            count++;
            prev = num; 
        }
        i++; 
    }

    printf("The count is %d\n", count);
    return 0;
}