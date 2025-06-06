#include <stdio.h>

void printBinary(int num) {
    if(num == 0) {
        printf("0");
        return;
    }
    
    int binary[32];
    int i = 0;
    
    while(num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }
    
    // Print in reverse order
    for(int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    printf("Binary representation: ");
    printBinary(num);
    return 0;
}