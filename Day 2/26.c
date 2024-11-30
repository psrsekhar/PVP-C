/**
 * Write a C program to insert an integer X into a sorted array (sorted in ascending order) containing N integers so that the array remains sorted after insertion. Return the length of the new array.
 */
#include <stdio.h>
void main()
{
    int size, x, pos = 0, i;
    printf("enter size: ");
    scanf("%d", &size);
    int a[size+1];
    for(i = 0; i< size; i++)
    {
        printf("enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("enter number: ");
    scanf("%d", &x);
    for(i = 0; i< size; i++){
        //finding position in the array
        if(x < a[i]){
            pos = i;
            break;
        }
    }
    for(i = size; i>pos; i--){
        //to swap elements in array
        a[i] = a[i-1];
    }
    a[pos]=x;
    size++;
    for(i = 0; i< size; i++){
        printf("%d\t", a[i]);
    }
}