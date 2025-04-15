#include <stdio.h>

int main() {
    // Declare and initialize character array without size
    char name[] = "Mahalakshmi";

    // Print name using for loop
    printf("Your name is: ");
    for (int i = 0; name[i] != '\0'; i++) {
        printf("%c", name[i]);
    }
    printf("\n");

    return 0;
}