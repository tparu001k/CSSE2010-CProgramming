#include <stdio.h>

int main(void) {
    int a;
    int b;
    int sum;

    /*a = 5;
    b = 10;
    sum = a + b;*/

    // alternative method is to use scanf function - to parse inputs
    printf("enter an integer:\n");
    scanf("%d", &a); // args: type, &variable to assign to (& is for pointer)
    printf("enter another integer:\n");
    scanf("%d", &b);
    sum = a + b;

    /* % at end of string tells to take next argument and print it as an integer.
        d after % symbol indicates the format that the integer is printed it 
        i.e. d - decimal, x - hexadecimal, o - octal*/    
    printf("My variable equals %d", sum);
    return 0;
}