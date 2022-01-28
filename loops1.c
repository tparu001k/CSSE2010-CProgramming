#include <stdio.h>

// calculate factorial of 7
int main(void) {
    int num, f;

    num = 1;
    f = 1;
    while(num <= 7) {
        f = f * num;
        num = num + 1;
    }
    printf("Factorial = %d\n", f);

    return 0;
}