/*
  @title: array-find the largest
  @author: JISHNU E

*/

#include <stdio.h>

int main() {
    int numbers[] = {10, 23, 5, 67, 34, 89, 12, 45}; // Example array
    int size = sizeof(numbers) / sizeof(numbers[0]); // Calculate the size of the array

    int largest = numbers[0]; // Assume the first element is the largest

    for(int i = 1; i < size; i++) {
        if(numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    printf("The largest element in the array is: %d\n", largest);

    return 0;
}