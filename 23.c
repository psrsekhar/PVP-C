/**
 * You have an array of integers representing the daily temperatures for a week (index0: Sunday, index1: Monday, and so on). Write a C program that finds and prints the day with the highest temperature and the temperature itself.
 */
#include <stdio.h>
void main(){
    const char days[7]={'S', 'M', 'T', 'W', 't', 'F', 's'};
    float temperatures[7] = {23.4, 35.6, 42.8, 41.3, 78.5, 89.1, 74.5};
    int maxIndex = -1;
    float maxTemperature = -1;
    for(int i=0; i<7; i++){
        if(temperatures[i] > maxTemperature){
            maxTemperature = temperatures[i];
            maxIndex = i;
        }
    }
    printf("Max Temperature: %f", maxTemperature);
}