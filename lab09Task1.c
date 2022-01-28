/* Write and test a C program that calculates and prints the number of
and sum of the integers between 1 and 100 (inclusive) that are not
divisible by 3 and 5. (Hint: See the % (modulus) operator in C
Tutorial 2.) */
#include <stdio.h>

int main(void) {
    int i;
    int sum = 0;

    for(i = 1; i <= 100; i++) {
        if(((i % 3) > 0) && ((i % 5) > 0)) {
            printf("%d ", i);
            sum = sum + i;
        }
    }

    printf("\nThe sum of integers between 1 and 100 (inclusive) that are not divisible by 3 and 5 is %d.", sum); 


}

