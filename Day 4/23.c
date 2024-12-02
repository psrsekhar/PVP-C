/**
 * Develop a C program to find the sum of the elements in any array by passing array as a parameter to function. 
 */
#include <stdio.h>
int sumOfElements(int numbers[]){
    int sum = 0;
    int size = sizeof(numbers)/sizeof(numbers[0]);
    for(int i=0; i<size; i++){
        sum += numbers[i];
    }
    return sum;
}
void main(){
    int numbers[] = {25, 78, 97, 65, 42};    
    printf("%d", sumOfElements(numbers));
}