/*
  @title: pointer- Array of pointer
  @author: JISHNU E

*/

#include <stdio.h>

int main() {
    int x = 10, y = 20, z = 30;

    int *ptr_arr[3];  // Declaring an array of integer pointers

    ptr_arr[0] = &x;  // Assigning the address of x to the first element
    ptr_arr[1] = &y;  // Assigning the address of y to the second element
    ptr_arr[2] = &z;  // Assigning the address of z to the third element

    for(int i = 0; i < 3; i++) {
        printf("Element %d: %d\n", i, *ptr_arr[i]);
    }

    return 0;
}
