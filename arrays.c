#include <stdio.h>

int main(void) {
    int size = 10;
    int a[size];
    int i, j;

    for(i=0; i<size; i++) {
        printf("enter num: ");
        scanf("%d", &a[i]);
    }

    for(j= size-1; j>=0; j--) {
        printf("%d", a[j]);
    }
}