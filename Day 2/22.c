/**
 * Find a Peak Element in an Array:
    Given an array of integers, find a peak element in it. An array element is peak if it is not smaller than its neighbors. For corner elements, consider only one neighbor. 
    Example: for input array {5, 10, 20, 15}, 20 is the only peak element; for input array {10, 20, 15, 2, 23, 90, 67}, the peak elements are 20 and 90.
 */
#include <stdio.h>
void main(){
   int size;
   printf("enter size of array: ");
   scanf("%d", &size);
   int elements[size];
   for(int i = 0; i<size; i++){
      printf ("enter element[%d]", i);
      scanf("%d", &elements[i]);
   }
   //code for first, and last peek elements
   if(size == 1) return elements[0];
   if(elements[0] > elements[1])printf("%d", elements[0]);
   if(elements[size-1] > elements[size-2])printf("%d", elements[size-1]);

   //code for middle elements
   for(int i = 1; i<size-1; i++){
      if(elements[i] > elements[i-1] && elements[i] > elements[i+1]){
         printf("%d", elements[i]);
      }
   }
}