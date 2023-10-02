/*
  @title: bitwise operation - SET
  @author: JISHNU E

*/




#include <stdio.h>

int main() {
    unsigned int num = 5; // Binary: 00000101
    int bit_position = 1; // 0-based index of the bit to set

    num = num | (1 << bit_position); // Set the bit at bit_position

    printf("Result after setting bit %d: %u\n", bit_position, num);
    return 0;
}
