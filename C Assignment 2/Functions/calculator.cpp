#include <stdio.h>

// Function declarations
int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int quotient(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero not allowed.\n");
        return 0;
    }
    return a / b;
}

int remainder(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero not allowed.\n");
        return 0;
    }
    return a % b;
}

int main() {
    int num1, num2, result;
    char op;

    printf("Enter operation (e.g., 5 + 3): ");
    if (scanf("%d %c %d", &num1, &op, &num2) != 3) {
        printf("Invalid input format.\n");
        return 1;
    }

    switch (op) {
        case '+':
            result = add(num1, num2);
            printf("Result: %d\n", result);
            break;
        case '-':
            result = sub(num1, num2);
            printf("Result: %d\n", result);
            break;
        case '*':
            result = mul(num1, num2);
            printf("Result: %d\n", result);
            break;
        case '/':
            result = quotient(num1, num2);
            if (num2 != 0)
                printf("Quotient: %d\n", result);
            break;
        case '%':
            result = remainder(num1, num2);
            if (num2 != 0)
                printf("Remainder: %d\n", result);
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}