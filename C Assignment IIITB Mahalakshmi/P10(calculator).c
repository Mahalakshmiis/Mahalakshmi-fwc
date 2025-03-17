#include <stdio.h>

int main() {
    int n, i = 0;
    float num1, num2, result;
    char op;

    printf("Enter number of operations: ");
    scanf("%d", &n);

    while (i < n) {
        printf("Enter two numbers:\n");
        scanf("%f %f", &num1, &num2);
        
        printf("Enter an operator (+, -, *, /, %%) : ");
        scanf(" %c", &op); // Space before %c to ignore previous newline

        switch (op) {
            case '+':
                result = num1 + num2;
                printf("Result of %.2f + %.2f is %.2f\n", num1, num2, result);
                break;
            case '-':
                result = num1 - num2;
                printf("Result of %.2f - %.2f is %.2f\n", num1, num2, result);
                break;
            case '*':
                result = num1 * num2;
                printf("Result of %.2f * %.2f is %.2f\n", num1, num2, result);
                break;
            case '/':
                if (num2 != 0)
                    printf("Result of %.2f / %.2f is %.2f\n", num1, num2, num1 / num2);
                else
                    printf("Error! Division by zero is not allowed.\n");
                break;
            case '%':
                if ((int)num2 != 0)  // Prevent modulo by zero
                    printf("Result of %d %% %d is %d\n", (int)num1, (int)num2, (int)num1 % (int)num2);
                else
                    printf("Error! Modulo by zero is not allowed.\n");
                break;
            default:
                printf("Invalid operator!\n");
        }
        i++; // Increment the counter to ensure loop runs exactly `n` times
    }
    return 0;
}