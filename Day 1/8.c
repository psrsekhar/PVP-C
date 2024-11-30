/**
 * Create a C program that employs a "while" loop to print all even numbers between 1 and 50, but skips any numbers that are divisible by 6 using the "continue" statement. Provide the code and a detailed explanation. Write a C program that uses a "for" loop to find the first prime number between 100 and 200. Implement the "break" statement to exit the loop once the prime number is found. 
 */
#include <stdio.h>
void main(){
    int number = 0;
    while(number <= 50){
        if(number % 6 != 0){
            printf("%d is a even number which is not divisible by 6", number);
        }
        number+=2;
    }
}