#include <stdio.h>

int main() {
    unsigned char x = 5;
    printf("Binary of %d: ", x);
    for(int i = 7; i >= 0; i--)
        printf("%d", (x >> i) & 1);
    
    // Set bit 3
    x |= (1 << 3);
    printf("\nAfter setting bit 3: %d\n", x);
    
    // Clear bit 2
    x &= ~(1 << 2);
    printf("After clearing bit 2: %d\n", x);
    
    // Toggle bit 1
    x ^= (1 << 1);
    printf("After toggling bit 1: %d\n", x);
    
    return 0;
}