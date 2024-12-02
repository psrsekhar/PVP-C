/**
 * Write a program in C to allocate and de-allocate memory for an array of integers using malloc().
 */
#include <stdio.h>
#include <stdlib.h>
void main(){
    int n, i, *p;
    printf("enter number of elements: ");
    scanf("%d", &n);
    p = (int*)malloc(n * sizeof(int));
    if(p == NULL){
        printf("Memory allocation failed.");
    }else{
        for(i=0; i<n; i++){
            scanf("%d", (p+i));
        }
        for(i=0; i<n; i++){
            printf("\n%d", *(p+i));
        }        
        free(p);
        p = NULL;
    }
}