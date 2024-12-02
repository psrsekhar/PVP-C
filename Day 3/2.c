/**
 * What does the following fragment of C program print? 
    char c[] = “PVPSIT24”, *p; 
    p = c; 
    p
    printf(“%s”, p + p[3] – p[1]); 
 */
#include <stdio.h>
#include <stdlib.h>
void main()
{
    char c[] = "PVPSIT24", *p; 
    p = c;
    printf("%s", p + p[3] - p[1]);
}