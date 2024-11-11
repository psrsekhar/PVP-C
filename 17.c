/**
 * Write a C program to print the prime numbers between 1 and the given number ‘n’.
 */
#include <stdio.h>
int isPrime(int number);
void main(){
    int n, i;
    printf("enter n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        if(isPrime(i) == 1){
            printf("\n%d is a prime number.", i);
        }
    }
}
int isPrime(int number){
    int i;
    if(number <= 1) return 0;
    for(i = 2; (i * i) <= number; i++){
        if(number % i == 0){
            return 0;
        }
    }
    return 1;
}