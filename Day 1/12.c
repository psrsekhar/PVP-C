/**
 * Build a C program to find a factorial of a given number 𝑛 by using while loop and do while loop
 */
#include <stdio.h>
void main(){
    int n, i, factorial = 1;
    printf("enter number: ");
    scanf("%d", &n);
    i = n;
    while(i > 0){
        factorial *= i;
        i--;
    }
    printf("Factorial of %d using while is : %d", n, factorial);
    i = 1;
    factorial = 1;
    do{
        factorial *= i;
        i++;      
    }while(i <= n);
    printf("Factorial of %d using do-while is : %d", n, factorial);
}