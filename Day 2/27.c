/**
 * Write a C program to evaluate the mean, median, and mode of an array of numbers.
 *  - The Mean (or Average) is calculated by summing all elements in the array and dividing by the number of elements.
 *  - The Median is the middle value of a sorted array. To find it, first sort the array
 *  - The Mode is the element that appears most frequently in the array. There may be:
        - One mode if one element has the highest frequency,
        - Multiple modes if several elements have the same highest frequency,
        - No mode if all elements appear with the same frequency (or if each element appears only once).
 */

#include <stdio.h>
void main()
{
       int size, sum = 0;
       float mean, median, mode;
       printf("enter size: ");
       scanf("%d", &size);
       int elements[size];
       for (int i = 0; i < size; i++)
       {
              printf("a[%d] : ", i);
              scanf("%d", &elements[i]);
       }
       //Mean calculation
       for (int i = 0; i < size; i++){
              sum += elements[i];
       }
       mean = sum/size;
       
       //Median calculation
       median = (size % 2 != 0)? elements[size/2]: ((elements[(size - 1)/2] + elements[size/2])/2.0);

       //Mode calculation
       int count = 0, maxCount = 0, mode = 0;;
       for (int i = 0; i < size; i++){
              count = 0;
              for (int j = i+1; j < size; j++){
                     if(elements[i] == elements[j]){
                            count++;
                     }
              }
              if(count > maxCount){
                     maxCount = count;
                     mode = elements[i];
              }
       }
       printf("Mean : %f\tMedian : %f\tMode: %f", mean, median, mode);
}