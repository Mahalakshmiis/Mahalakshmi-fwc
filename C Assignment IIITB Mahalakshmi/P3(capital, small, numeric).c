#include <stdio.h>

int main() {
    int n, i = 0;
    char ch;

    printf("Enter n characters: ");
    scanf("%d", &n);

    while (i < n) {
        printf("Enter a character: ");
        scanf(" %c", &ch); 

        if (ch >= 'A' && ch <= 'Z')
            printf("The given character '%c' is a Capital alphabet.\n", ch);
        else if (ch >= 'a' && ch <= 'z')
            printf("The given character '%c' is a small alphabet.\n", ch);
        else if (ch >= '0' && ch <= '9')
            printf("The given character '%c' is a numeric character.\n", ch);
        else
            printf("The given character '%c' is a special character.\n", ch);

        i++;
    }

    return 0;
}