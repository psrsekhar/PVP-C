/**
 * A lazy programmer wants to write program that will perform two activities together. Activity 1 is reverse the elements of the integer array and the activity 2 is sum the elements of the array. Help the lazy programmer to complete the program correctly. 
 */
#include <stdio.h>
void main()
{
    int size, index, sum = 0;
    printf("enter size of array: ");
    scanf("%d", &size);
    int a[size];

    for (index = 0; index < size; index++)
    {
        printf("\nenter a[%d]: ", index);
        scanf("%d", &a[index]);
        sum += a[index];
    }

    for(index = size-1; index >= 0; index--){
        printf("\nenter a[%d]: %d", index, a[index]);
    }
    printf("\nSum of elements in array is : %d", sum);
}