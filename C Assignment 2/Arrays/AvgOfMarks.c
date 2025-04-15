#include <stdio.h>

// Function to calculate average marks
float calculateAverage(int marks[], int numStudents) {
    int sum = 0;
    
    // Calculate sum of all marks
    for(int i = 0; i < numStudents; i++) {
        sum += marks[i];
    }
    
    // Return average
    return (float)sum / numStudents;
}

int main() {
    int numStudents;
    
    // Get number of students from user
    printf("Enter number of students in class: ");
    scanf("%d", &numStudents);
    
    // Declare array to store marks
    int marks[numStudents];
    
    // Get marks for each student
    printf("Enter marks for %d students:\n", numStudents);
    for(int i = 0; i < numStudents; i++) {
        printf("Student %d: ", i+1);
        scanf("%d", &marks[i]);
    }
    
    // Calculate and display average
    float average = calculateAverage(marks, numStudents);
    printf("\nAverage marks of the class: %.2f\n", average);
    
    return 0;
}