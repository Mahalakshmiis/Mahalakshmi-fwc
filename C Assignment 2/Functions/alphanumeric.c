#include <stdio.h>

int fun_alpha_num(char c) {
    // Check if c is a letter (A-Z or a-z) or a digit (0-9)
    if ((c >= 'A' && c <= 'Z') || 
        (c >= 'a' && c <= 'z') || 
        (c >= '0' && c <= '9'))
        return 1;
    else
        return 0;
}

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);  // space before %c to skip any leftover whitespace

    if (fun_alpha_num(ch))
        printf("'%c' is an alphanumeric character.\n", ch);
    else
        printf("'%c' is NOT an alphanumeric character.\n", ch);

    return 0;
}