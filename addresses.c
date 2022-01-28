#include <stdio.h>

// & is the "address-of" operator - only gives address IT IS NOT A POINTER
int main(void) {
    int a;
    unsigned char b;

    printf("the memory address of the variable a is %x\n", &a);
    printf("the memory address of the variable b is %x\n", &b);
}