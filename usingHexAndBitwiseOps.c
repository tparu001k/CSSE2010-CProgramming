#include <stdio.h>
#include <stdint.h> // for specifying integer size (bits)
/*
int8_t - an 8-bit two's complement integer (can represent values from -128 to 127 - this is the same as the C type "char")
uint8_t - an 8-bit unsigned integer (can represent values from 0 to 255)
int16_t - a 16-bit two's complement integer
uint16_t - a 16-bit unsigned integer
*/

int main(void) {
    int a;
    int b;
    int sum;

    printf("enter an integer (hex):\n");
    scanf("%x", &a); // hh indicates 8-bit integer
    printf("enter another integer (hex)\n");
    scanf("%x", &b);

    sum = a & b;
    printf("The bitwise AND of two ints is 0x%x", sum);
    return 0;

}