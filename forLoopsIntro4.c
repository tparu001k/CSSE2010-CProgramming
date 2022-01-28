#include <stdio.h>

// addition tablefor numbers from -5 to 5 inclusive
int main(void) {
    int a, b, i, size;
    
    size = 5;
    
    // heading line
    printf("a*b| ");
    for(b = -5; b<=size; b++) {
        printf("%4d", b);
    }
    printf("\n");

    // separator line (dashes)
    printf("---+-");
    for(i=1; i<=size*10; i++) {
        printf("-");
    }
    printf("\n");
    
    // column with numbers
    for(a= -5; a<=size; a++) {
        printf("%2d | ", a);
        // rows for each number
        for(b= -5; b<=size; b++) {
            printf("%4d", a+b);
        }
        printf("\n");  
    }

    return 0;
}