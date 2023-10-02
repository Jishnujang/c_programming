/*
  @title: pointer- malloc usage
  @author: JISHNU E

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int* arr; // Declare a pointer to an integer

    // Dynamically allocate memory for an array of 5 integers
    arr = (int*)malloc(5 * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed");
        return 1;
    }

    // Accessing the dynamically allocated memory
    for (int i = 0; i < 5; i++) {
        arr[i] = i * 5;
    }

    // Printing the values
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    // free the allocated memory when you're done with it
    free(arr);

    return 0;
}
