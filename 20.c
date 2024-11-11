/**
 * write a C program to perform Arithemetic Operations
 */
#include <stdio.h>
void main()
{
    char operator;
    float firstNumber, secondNumber, result = 0.0;
    printf("enter first number: ");
    scanf("%f", &firstNumber);
    printf("enter second number: ");
    scanf("%f", &secondNumber);
    printf("enter operator: ");
    scanf("%c", &operator);
    switch (operator)
    {
        case '+':
            result = firstNumber + secondNumber;
            break;
        case '-':
            result = firstNumber - secondNumber;
            break;
        case '*':
            result = firstNumber * secondNumber;
            break;
        case '/':
            result = firstNumber / secondNumber;
            break;
        case '%':
            result = (int)firstNumber % (int)secondNumber;
            break;
        default:
            printf("Invalid operator");
            break;
    }
    printf("Result is : %f", result);
}