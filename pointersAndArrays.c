#include <stdio.h>

int main(void) {
    /* Declare a to be an array of 10 integers and p to be a pointer to a integer */
    int a[10];
    int *p;

    /* Set p to point to the first element in the array */
    p = &a[0];
    /* We could have written p = a; here */

    /* Set the first element in the array to be 1 */
    *p = 1;

    /* Increment our pointer by 1 - this means p now points to the next integer */
    p++;

    /* Set the next element in the array to be 2 */
    *p = 2;

    /* additional notes:
    Note that we use pointer arithmetic in this example (by adding 1 to p). Arithmetic on pointers is treated specially - adding i to a pointer means the pointer will now point to the i-th object of that type beyond the pointer. (It does not add i to the memory address - it will add i *sizeof(type) where type is the type being pointed to.)
    This also means an array reference
    a[i]
    can also be written
    *(a+i)
    The two forms are equivalent. It also follows that
    &a[i]
    is the same as
    a+i
    which is the reason we can replace
    p = &a[0];
    with
    p = a;
    if we wanted to. Note however that an array name is not a variable. 
    We can not write a++ to advance the array position.
    Note that strings are often referred to as type char* rather than char[].*/
}