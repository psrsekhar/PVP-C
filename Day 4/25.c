/**
 * Construct a C program to calculate GCD of two numbers using functions 
 */
#include <stdio.h>
int gcd(int a, int b){
    int res = 0;
    while(b != 0){
        res = b;
        b = a % b;
        a = res;
    }
    return a;
}
void main(){
    printf("GCD of 56 and 98 is : %d", gcd(56, 98));
}