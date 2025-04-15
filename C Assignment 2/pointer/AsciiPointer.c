#include <stdio.h>

int main() {
    char ch1, ch2;
    char *ptr1 = &ch1, *ptr2 = &ch2;
    
    printf("Enter two characters: ");
    scanf(" %c %c", ptr1, ptr2);
    
    if(*ptr1 > *ptr2)
        printf("'%c' has higher ASCII value\n", *ptr1);
    else if(*ptr2 > *ptr1)
        printf("'%c' has higher ASCII value\n", *ptr2);
    else
        printf("Both have same ASCII value\n");
    return 0;
}