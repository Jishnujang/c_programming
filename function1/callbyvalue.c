/*
  @title: function1-callbyvalue
  @author: JISHNU E

*/

#include <stdio.h>

void typecastExample(int num) {
    char charValue = (char)num; // Typecasting int to char

    printf("Inside the function: int value = %d, char value = %c\n", num, charValue);
}

int main() {
    int intValue = 65; // ASCII value of 'A'

    printf("Before typecasting: int value = %d\n", intValue);

    typecastExample(intValue);

    return 0;
}
