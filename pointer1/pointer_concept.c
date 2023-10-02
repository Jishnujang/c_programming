/*
  @title: pointer- simple pointer
  @author: JISHNU E

*/

#include <stdio.h>

int main() {
    char str[] = "Hello, Jishnu"; // Character array
    char *ptr = str; // Character pointer pointing to the start of the array
    printf("%s\n",ptr);// to print entire string
    // Accessing the characters using the pointer
    while (*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
    }

    return 0;
}