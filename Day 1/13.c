/**
 * Build a C program to print the Fibonacci sequence 
 */
#include <stdio.h>
void main()
{
    int n, i, firstTerm = 0, secondTerm = 1, nextTerm;
    printf("enter number: ");
    scanf("%d", &n);

    printf("Fibonacci Sequence: ");
    for(i = 1; i <= n; i++){
        printf("%d", firstTerm);
        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;        
    }
}