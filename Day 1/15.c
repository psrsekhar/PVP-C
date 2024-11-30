/**
 * write a C program to determine whether given year is a leap year.
    A year is a leap year if “any one of ” the following conditions are satisfied: 
        - The year is multiple of 400.
        - The year is a multiple of 4 and not a multiple of 100.
 */
#include <stdio.h>
void main(){
    int year;
    printf("enter year: ");
    scanf("%d", &year);

    if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))){
        printf("%d is a leap year", year);
    }else{
        printf("%d is not a leap year", year);
    }
}