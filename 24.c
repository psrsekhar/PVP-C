/**
 * The upper triangular matrix can be extracted from a square matrix by extracting the principal diagonal and the elements that lie above it. Write a C program to extract the upper triangular matrix from a square matrix.
 */

#include <stdio.h>
void main(){
    int order;
    printf("ente order of matrix: ");
    scanf("%d", &order);
    int elements[order][order];
    for(int i=0; i<order; i++){
        for(int j=0; j<order; j++){
            printf("enter elemets[%d][%d]: ", i,j);
            scanf("%d", &elements[i][j]);
        }
    }
    for(int i=0; i<order; i++){
        for(int j=0; j<order; j++){ 
            if(j >= i){
                printf("%d", elements[i][j]);
            }else{
                printf(" ");
            }          
        }
        printf("\n");
    }
}