/*
  @title: array1- print multiples of 2
  @author: JISHNU E

*/
#include <stdio.h>

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Example array
    int size = sizeof(numbers) / sizeof(numbers[0]); // Calculate the size of the array

    printf("Multiples of 2:\n");

    for(int i = 0; i < size; i++) {
        if(numbers[i] % 2 == 0) {
            printf("%d ", numbers[i]);
        }
    }

    return 0;
}