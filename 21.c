/**
 * write a C program to check whether a given number is palindrome or not
 */
#include <stdio.h>
void main(){
    int number, reverse = 0, temp;
    printf("enter number: ");
    scanf("%d", &number);
    temp = number;
    while(temp > 0){
        //get last digit and append to reverse
        reverse = (reverse*10) + (temp % 10);
        temp /= 10;//remove last digit
    }
    if(number == reverse){
        printf("%d is a palidrome number", number);
    }else{
        printf("%d is not a palidrome number", number);
    }
}