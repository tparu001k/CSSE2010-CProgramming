#include <stdio.h>

// multiplying table (with modified field width specs)
int main(void) {
    int a, b, i, size;

    size = 10;
    
    // heading line
    printf("a*b| ");
    for(b=1; b<=size; b++) {
        printf("%4d", b);
    }
    printf("\n");

    // separator line (dashes)
    printf("---*-");
    for(i=1; i<=size*4; i++) {
        printf("-");
    }
    printf("\n");
    
    // column with numbers
    for(a=1; a<=size; a++) {
        printf("%2d | ", a);
        // rows for each number
        for(b=1; b<=size; b++) {
            printf("%4d", a*b);
        }
        printf("\n");  
    }

    return 0;
}