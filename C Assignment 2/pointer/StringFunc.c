#include <stdio.h>

// 1) int strlen(char s[]); 
int my_strlen(char s[]) {
    int len = 0;
    while (*s++) {
        len++;
    }
    return len;
}

// 2) char * strrev(char s[]); // returns string base address
char * my_strrev(char s[]) {
    char *start = s;
    char *end = s;
    while (*end) { // find the end of the string
        end++;
    }
    end--; // move to the last character
    char temp;
    while (start < end) { // swap characters
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    return s; // return the base address of the reversed string
}

// 3) char * strcpy(char d[], char s[]); // returns destination base address
char * my_strcpy(char d[], char s[]) {
    char *ptr = d;
    while (*s) { // copy each character
        *d++ = *s++;
    }
    *d = '\0'; // null-terminate the destination string
    return ptr; // return the destination base address
}

// 4) int strcmp(char s1[], char s2[]);
int my_strcmp(char s1[], char s2[]) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

// 5) int strncmp(char s1[], char s2[], int n);
int my_strncmp(char s1[], char s2[], int n) {
    while (n-- && *s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return (n >= 0) ? *(unsigned char *)s1 - *(unsigned char *)s2 : 0;
}

// 6) int stricmp(char s1[], char s2[]);
int my_stricmp(char s1[], char s2[]) {
    while (*s1 && (*s1 == *s2 || (*s1 + 32) == *s2 || *s1 == (*s2 + 32))) {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

// 7) char * strcat(char d[], char s[]); // returns destination base address
char * my_strcat(char d[], char s[]) {
    char *ptr = d;
    while (*d) { // find the end of destination string
        d++;
    }
    while (*s) { // append source string
        *d++ = *s++;
    }
    *d = '\0'; // null-terminate the concatenated string
    return ptr; // return the destination base address
}

// 8) char * strlwr(char s[]); // returns s base address
char * my_strlwr(char s[]) {
    char *ptr = s;
    while (*s) {
        if (*s >= 'A' && *s <= 'Z') {
            *s += 32; // convert to lowercase
        }
        s++;
    }
    return ptr; // return the base address of the string
}

// 9) char * strchr(char s[], char c); // returns address of given character first occurrence in given string
char * my_strchr(char s[], char c) {
    while (*s) {
        if (*s == c) {
            return s; // return the address of first occurrence
        }
        s++;
    }
    return NULL; // if character not found
}

// 10) char * strstr(char str[], char sub[]); // returns the address of the character in the main string from where the substring is matching
char * my_strstr(char str[], char sub[]) {
    char *p1, *p2;
    while (*str) {
        p1 = str;
        p2 = sub;
        while (*p1 && *p2 && (*p1 == *p2)) {
            p1++;
            p2++;
        }
        if (!*p2) {
            return str; // substring found
        }
        str++;
    }
    return NULL; // if substring not found
}

int main() {
    char str1[] = "Hello World";
    char str2[] = "World";
    char str3[50];
    
    // Test strlen function
    printf("Length of '%s': %d\n", str1, my_strlen(str1));
    
    // Test strrev function
    printf("Reversed string: %s\n", my_strrev(str1));
    
    // Test strcpy function
    my_strcpy(str3, str1);
    printf("Copied string: %s\n", str3);
    
    // Test strcmp function
    printf("Comparison of '%s' and '%s': %d\n", str1, str2, my_strcmp(str1, str2));
    
    // Test strncmp function
    printf("Comparison of '%s' and '%s' (first 5 characters): %d\n", str1, str2, my_strncmp(str1, str2, 5));
    
    // Test stricmp function
    printf("Case-insensitive comparison of '%s' and '%s': %d\n", str1, str2, my_stricmp(str1, str2));
    
    // Test strcat function
    my_strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
    
    // Test strlwr function
    printf("Lowercase string: %s\n", my_strlwr(str1));
    
    // Test strchr function
    printf("First occurrence of 'o' in '%s': %p\n", str1, my_strchr(str1, 'o'));
    
    // Test strstr function
    printf("Substring '%s' found in '%s' at: %p\n", str2, str1, my_strstr(str1, str2));

    return 0;
}