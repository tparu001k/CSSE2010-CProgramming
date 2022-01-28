#include <stdio.h>
#include <stdint.h> // for specifying integer size (bits)
/*
int8_t - an 8-bit two's complement integer (can represent values from -128 to 127 - this is the same as the C type "char")
uint8_t - an 8-bit unsigned integer (can represent values from 0 to 255)
int16_t - a 16-bit two's complement integer
uint16_t - a 16-bit unsigned integer
*/

int main(void) {
    uint8_t a, b, sum;

    printf("enter an integer:\n");
    scanf("%hhd", &a); // hh indicates 8-bit integer
    printf("enter another integer\n");
    scanf("%hhd", &b);

    sum = a + b;
    printf("The sum is %d", sum);
    return 0;

}