#include <stdio.h>

int main(void) {
    int a, b;
    int size;

    size = 10;
    
    for(a=1; a<=size; a++) {
        for(b=1; b<=size; b++) {
            // print out sum of a and b using a field width of 3
            // (i.e. gap between each entry/field)
            printf("%3d", a+b);
        }
        printf("\n");
    }
    return 0;
}