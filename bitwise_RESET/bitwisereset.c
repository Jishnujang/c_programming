/*
  @title: bitwise operation - RESET
  @author: JISHNU E

*/


#include <stdio.h>

int main() {
    unsigned int num = 7; // Binary: 00000111
    int bit_position = 1; // 0-based index of the bit to reset

    num = num & ~(1 << bit_position); // Reset the bit at bit_position

    printf("Result after resetting bit %d: %u\n", bit_position, num);
    return 0;
}