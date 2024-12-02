/**
 * Write a C Program to swap two numbers using function. 
 */
#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b)
{
    char temp;
    char *p = a, *q = b;
    for(size_t i = 0; i < sizeof(int); i++){
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
    swap(&x, &y);
    printf("After swapping: x = %d, y = %d", x, y);
}