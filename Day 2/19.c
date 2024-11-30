/**
 * write a C program to extract and print right most digit of a given number 
 */
#include <stdio.h>
void main(){
    int number;
    printf("enter number: ");
    scanf("%d", &number);
    printf("Right most digit is %d", (number % 10));
}