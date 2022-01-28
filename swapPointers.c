#include <stdio.h>

// this method is wrong because it swaps copies of x and y
// rather than their actual values.
void swap(int x, int y) {    /* WRONG */
    int temp;
    temp = x;
    x = y;
    y = temp;
}

// we can use pointers to solve the above problem:
// NOTE: the function would be called swap(&a, &b) rather than swap(a, b)
void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}