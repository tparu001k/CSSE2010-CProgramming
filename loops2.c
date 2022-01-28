#include <stdio.h>

// calculate factorial of any inputted number
int main(void) {
    int num, f, input;

    num = 1;
    f = 1;
    printf("enter a number: ");
    scanf("%d", &input);
    while(num <= input) {
        f = f * num;
        num = num + 1;
    }
    printf("Factorial = %d\n", f);

    return 0;
}