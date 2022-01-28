/* Write a program that prompts the user for 
5 integer inputs and stores them in an array. 
The program then uses the swap function above to swap 
function to swap the 1st and 4th elements of the array. 
The program then prints out the modified contents of the array. */
#include <stdio.h>

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(void) {
    int size = 5;
    int a[size];
    int i;

    for(i = 0; i < size; i++) {
        printf("enter value: \n");
        scanf("%d", &a[i]);
    }

    swap(&a[0], &a[3]);

    for(i = 0; i < size; i++) {
        printf("element %d: %d\n", i, a[i]);
    }

    return 0;
}

