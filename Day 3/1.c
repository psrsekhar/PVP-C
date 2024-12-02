/**
 * What is the output of the following fragment of ‘C’ code?
    int a[] = {10, 20, 30, 40, 50}, *p;
    p = a + 3;
    printf(“%d”, p[-2]);
 */
#include <stdio.h>
#include <stdlib.h>
void main()
{
   int a[] = {10, 20, 30, 40, 50}, *p;
   p = a + 3;
   printf("%d", p[-2]);
}