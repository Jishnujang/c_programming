/*
  @title: function2-callbyreference
  @author: JISHNU E

*/


#include <stdio.h>

void incrementByReference(int *num) {
    (*num)++; // Increment the value pointed to by num
}

int main() {
    int number = 5;

    printf("Before calling the function, number is %d\n", number);

    incrementByReference(&number); // Pass the address of number

    printf("After calling the function, number is %d\n", number);

    return 0;
}