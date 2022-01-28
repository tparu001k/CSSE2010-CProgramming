/* Write a program that prompts the user for 5 integer 
inputs and stores them in an array. The program then prints out the address of 
each array element alongside the data of each array element. 
i.e. the program prints out a memory map of your array. */
#include <stdio.h>

int main(void) {
    int size = 5;
    int a[size];
    int i;

    for(i = 0; i < size; i++) {
        printf("enter value: \n");
        scanf("%d", &a[i]);
    }

    for(i = 0; i < size; i++) {
        printf("array element %d: address is %x and data is %x\n", i, &a[i], a[i]);
    }

    return 0;
}