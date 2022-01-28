#include <stdio.h>

int main(void) {
    int num;

    // Prompt for and read in from user
    printf("Enter number: ");
    scanf("%d", &num);
    
    if ((num % 7) == 0) {
        printf("%d is divisble by 7\n", num);
    } else {
        printf("%d is indivisible by 7\n", num);
    }

    return 0;
}