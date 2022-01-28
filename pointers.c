#include <stdio.h>

// This code declares p to be a pointer to an integer 
// and makes it point to a (i.e. p will hold the address of a)
int main(void) {
    // declare pointer using type *p; notation
    int a;
    int *p;

    a = 0x25; // value of a

    printf("the data of var a is %x\n", a);
    printf("the address of var a is %x\n", &a);

    // initialising pointer
    p = &a;
    printf("the address pointed to by pointer p is %x\n", p);
    // dereferencing the pointer: *p can also be though of inverse of p i.e. data at address
    printf("the data at the address pointed to by p is %x\n", *p);

	printf("address %x contains data %x\n", &a, a);
    printf("address %x contains data %x\n", p, *p);

    // another example of dereferencing a pointer:
    int x = 1;
    int y = 2;
    int z = 3;
    int *ip;
    ip = &x;    /* ip points to x */
    y = *ip;    /* y will take on the value of the integer pointed to by ip */
    ip = &z;    /* ip now points to z */
    *ip = 0;    /* The integer pointed to by ip will take on the value 0 */

    return 0;
}