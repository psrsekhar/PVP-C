/**
 * Write a c program to swap two values of any type using void pointers.
 */
#include <stdio.h>
#include <stdlib.h>
void swap(void *a, void *b, size_t size)
{
    char temp;
    char *p = a, *q = b;
    for(size_t i = 0; i < size; i++){
        temp = p[i];
        p[i] = q[i];
        q[i] = temp;
    }
}
void main()
{
    int x = 20, y = 30;
    char a = 'g', b = 'h';
    printf("Before swapping: x = %d, y = %d", x, y);
    swap(&x, &y, sizeof(int));
    printf("After swapping: x = %d, y = %d", x, y);
}