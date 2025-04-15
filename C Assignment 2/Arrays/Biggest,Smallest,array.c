#include <stdio.h>
#include <limits.h>

int main() {
    int arr[10];
    int i = 0, max = INT_MIN, min = INT_MAX;
    int max_index, min_index;
    
    printf("Enter 10 elements:\n");
    while(i < 10) {
        scanf("%d", &arr[i]);
        i++;
    }
    
    // Find max and min
    i = 0;
    while(i < 10) {
        if(arr[i] > max) {
            max = arr[i];
            max_index = i;
        }
        if(arr[i] < min) {
            min = arr[i];
            min_index = i;
        }
        i++;
    }
    
    printf("Biggest number: %d at index %d\n", max, max_index);
    printf("Smallest number: %d at index %d\n", min, min_index);
    return 0;
}