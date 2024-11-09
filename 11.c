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