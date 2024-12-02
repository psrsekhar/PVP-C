/**
 * Write a C Program to find decimal equivalent of a given binary number using functions.
 */
#include <stdio.h>
int binaryToDecimal(int binary){
    int decimal = 0, base = 1;
    int remainder = 0;
    while(binary > 0){
        remainder = binary % 10;
        decimal += remainder * base;
        binary /= 10;
        base *= 2;
    }
    return decimal;
}
void main(){
    int binary = 1011;
    printf("%d is decimal equalent of %d", binaryToDecimal(binary), binary);
}