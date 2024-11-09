#include <stdio.h>
#include <stdbool.h>
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
