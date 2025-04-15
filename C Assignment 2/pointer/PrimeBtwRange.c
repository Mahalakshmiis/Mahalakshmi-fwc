#include <stdio.h>

int isPrime(int num) {
    if(num <= 1) return 0;
    for(int i = 2; i*i <= num; i++) {
        if(num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int start, end;
    printf("Enter two numbers: ");
    scanf("%d %d", &start, &end);
    
    printf("Prime numbers between %d & %d are: ", start, end);
    while(start <= end) {
        if(isPrime(start))
            printf("%d ", start);
        start++;
    }
    return 0;
}