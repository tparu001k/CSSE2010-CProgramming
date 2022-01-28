#include <stdio.h>

int main(void) {
    int num, sum;

    num = 1;
    sum = 0;
    while(num <= 10) {
        sum = sum + num;
        num = num + 1;
    }
    printf("Sum = %d\n", sum);

    return 0;
}