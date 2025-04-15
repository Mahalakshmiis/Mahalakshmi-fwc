#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str = (char*)malloc(100 * sizeof(char));
    
    if(str == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    printf("String entered: %s\n", str);
    printf("Length: %lu\n", strlen(str));
    
    free(str);
    return 0;
}