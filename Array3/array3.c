/*
  @title: array3- copy string
  @author: JISHNU E

*/
#include <stdio.h>

int main() {
    char source[] = "Hello, World!";
    char destination[20]; // Make sure destination has enough space
    int i = 0;

    // Copy characters until a null character is encountered
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }

    // Add a null character to the end of the destination string
    destination[i] = '\0';
   

    printf("Source string: %s\n", source);
    printf("Copied string: %s\n", destination);

    return 0;
}
