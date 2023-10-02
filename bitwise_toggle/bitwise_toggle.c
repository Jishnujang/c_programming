/*
  @title: bitwise operation - toggle
  @author: JISHNU E

*/

#include <stdio.h>

int main() {
    unsigned int num = 9; // Binary: 00001001
    int bit_position = 3; // 0-based index of the bit to toggle

    num = num ^ (1 << bit_position); // Toggle the bit at bit_position

    printf("Result after toggling bit %d: %u\n", bit_position, num);
    return 0;
}