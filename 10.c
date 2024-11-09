/**
 * Create a C program that continuously prompts the user to enter a positive integer until a negative number is entered. Calculate and display the sum of all the positive integers entered by the user. Utilize a "while" loop, conditional statements, and the 
"break" statement to terminate the loop when a negative number is provided.
 */
#include <stdio.h>
#include <stdbool.h>
void main(){
    int number, sum = 0;
    while(true){
        printf("enter a number: ");
        scanf("%d", &number);
        if(number < 0){
            break;
        }        
        sum += number;
    }
    printf("Sum of all postive integers is : %d", sum);
}