/**
 * Write a program to read an array as user input, access elements of an array and copy array into another array using pointers.
 */
#include <stdio.h>
#include <stdlib.h>
void main(){
    int n, i;
    printf("enter number of elements : ");
    scanf("%d", &n);
    int source[n], destination[n], *p;
    for(i = 0; i <n; i++){
        printf("enter value: ");
        scanf("%d", &source[i]);
    }
    p = source;
     for(i = 0; i <n; i++){
        destination[i] = *(p+i);
    } 
     for(i = 0; i <n; i++){
        printf("\nDestination[%d]: %d", i, destination[i]);
    }    
}