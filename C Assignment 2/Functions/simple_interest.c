#include <stdio.h>

float calculateSimpleInterest(float p, float r, float t) {
    if (p < 0 || r < 0 || t < 0) return -1;
    return (p * r * t) / 100.0;
}

int main() {
    float principal, rate, time;
    printf("Enter principal, rate and time: ");
    if (scanf("%f %f %f", &principal, &rate, &time) != 3 || principal < 0 || rate < 0 || time < 0) {
        printf("Invalid input.\n");
        return 1;
    }

    float si = calculateSimpleInterest(principal, rate, time);
    //printf("Total Amount = %.2f\n", principal + si);
    printf("Total Amount =%.2f" , si);
    return 0;
}