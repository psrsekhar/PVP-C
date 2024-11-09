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