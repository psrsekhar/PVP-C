/**
 * Write a C program to generate Pascal’s triangle
 */
#include <stdio.h>
void main(){
    int rows, coef = 1, i, j;
    printf("enter number of rows: ");
    scanf("%d", &rows);
    if(rows == 1){
        printf("%d", coef);
    }
    else if(rows > 1){
        /**height of triangle */
        for(i = 0; i < rows; i++){
            /**width of triangle */
            for(j = 0; j <= i; j++){
                /**First and last elements */
                if(j == 0 || i == 0){
                    coef = 1;                    
                }else{
                    /**middle elements */
                    coef = coef * (i-j+1)/j;
                }
                printf("%d", coef);
            }
            printf("\n");
        }
    }else{
        printf("Invalid input");
    }
}