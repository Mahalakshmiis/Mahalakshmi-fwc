#include <stdio.h>

int stringLength(char *str) {
    int len = 0;
    while(*str != '\0') {
        len++;
        str++;
    }
    return len;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    
    printf("Length: %d\n", stringLength(str));
    return 0;
}