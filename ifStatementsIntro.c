#include <stdio.h>

int main(void) {
    int num;

    // Prompt for and read in from user
    printf("Enter number: ");
    scanf("%d", &num);
    
    if ((num % 2)== 1) {
        printf("%d is odd\n", num);
    } else {
        printf("%d is even\n", num);
    }

    return 0;
}