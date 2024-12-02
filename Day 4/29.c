/**
 * Write a C Program to find Least Common multiple (LCM) of 2 given numbers using non recursive function.
 */
#include <stdio.h>
int lcm(int a, int b){
    int max = (a>b) ? a : b;
    while(1){
        if(max % a == 0 && max % b == 0){
            return max;
        }
        max++;
    }
}
void main(){
    int a = 4, b = 6;
    printf("LCM of two numbers is %d", lcm(a,b));
}