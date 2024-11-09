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