/**
 * A number is Super Prime if it is prime and all the numbers obtained by slicing its one or more right-most digits are also prime. For example, 7331 is a prime, 733 is prime, 73 is prime and 7 is a prime. Hence 7331 is super prime. Construct a C program to check given number is super prime or not.
 */
#include <stdio.h>

int trimNumber(int number);
int isPrime(int number);

int main(){
    int number, isPrimeNumber;
    printf("Enter a number: ");
    scanf("%d", &number);

    while(number > 0){
        isPrimeNumber = isPrime(number);
        if(isPrimeNumber == 1){
            number = trimNumber(number);
        } else {
            isPrimeNumber = 0;
            break;
        }
    }

    if(isPrimeNumber == 1){
        printf("It is a supreme prime number\n");
    } else {
        printf("It is not a supreme prime number\n");
    }

    return 0;
}

int trimNumber(int number){
    return number / 10;
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
