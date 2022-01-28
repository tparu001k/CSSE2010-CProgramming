#include <stdio.h>

int power(int base, int n) {
    int p;

    p = 1;
    while(n > 0) {
        p = p * base;
        n--;
    }
    return p;
}

int main(void) {
    int i;
    int powOf2;

    for (i=0; i < 10; i++) {
        powOf2 = power(2,i);
        printf("%d %d %d\n", i, powOf2, power(-3, i));
    }
    printf("\n");

    // another exercise: Write a program that asks the user for a number base (integer)
    // and then prints out the first 16 powers of that number (i.e. n0 to n15). 
    // You should be able to reuse the power() function - this is why functions are useful.
    int inputB, pow;
    printf("enter a base: ");
    scanf("%d", &inputB);

    for (i=0; i < 17; i++) {
        pow = power(inputB, i);
        printf("%d %d\n", i, pow);
    }

    return 0;
}