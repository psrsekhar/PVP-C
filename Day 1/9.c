/**
 * Write a C program that uses a "for" loop to find the first prime number between 100 and 200. Implement the "break" statement to exit the loop once the prime number is found.
 */
#include <stdio.h>
void main()
{
    int i, j, isPrime = 1;
    for (i = 100; i <= 200; i++)
    {
        isPrime = 1;
        for(j = 2; (j * j) < i; j++){
            if(i % j == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1){
            printf("%d is a prime number", i);
        }
    }
}
