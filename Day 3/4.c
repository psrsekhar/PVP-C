/**
 * Write a program in C to find the sum and mean of all elements in an array using pointers.
 */
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n, i, *p, sum = 0;
    float mean;
    printf("Enter the number of elements : \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements in the array : \n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d]:", i);
        scanf("%d", &a[i]);
    }
    p = a;
    for (i = 0; i < n; i++)
    {
        sum = sum + *(p + i);
    }
    printf("The sum of the elements in the array is : %d \n", sum);
    mean = sum / (float)n;
    printf("The mean of the given array will be : %d", mean);
}
