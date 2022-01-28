#include <stdio.h>

// multiplying table with while loops
int main(void) {
    int a, b, i, size, counter;

    size = 10;
    
    // heading line
    printf("a*b| ");
    b = 0;
    while(b<=size) {
        b = b + 1;
        printf("%4d", b);
    }
    printf("\n");

    // separator line (dashes)
    printf("---*-");
    i = 0;
    while(i<=size*4) {
        i = i + 1;
        printf("-");
    }
    printf("\n");
    
    // column with numbers
    a = 0;

    while(a<=size) {
        a = a + 1;
        printf("%2d | ", a);
        // rows for each number
        b = 0;
        while(b<=size) {
            b = b + 1;
            printf("%4d", a*b);
        }
        printf("\n"); 
    }

    return 0;
}