/**
 * Develop a C program for calculating simple interest.
 */
#include <stdio.h>
void main(){
    int p;
    float t, r, si;
    printf("enter principle: ");
    scanf("%d", &p);
    printf("enter time: ");
    scanf("%f", &t);
    printf("enter rate of interest: ");
    scanf("%f", &r);
    si = (p * t * r)/100;
    printf("Simple interest: %f", si);
}