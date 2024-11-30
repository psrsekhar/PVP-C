/**
 *  Develop a C program for finding the greatest and smallest number from four numbers given as input. Ex.: input: 5,3,15,10 output: greatest =15, smallest=3
 */
#include<stdio.h>
void main(){
    int a, b, c, d, greatest, smallest;
    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b);
    printf("enter c: ");
    scanf("%d", &c);
    printf("enter d: ");
    scanf("%d", &d);
    //Approach 1
    if((a>b) && (a>c) && (a>d)){
        greatest = a;
    }else if((b > c) && (b > d)){
        greatest = b;
    }else if((c > d)){
        greatest = c;
    }else{
        greatest = d;
    }

    if((a<b) && (a<c) && (a<d)){
        smallest = a;
    }else if((b < c) && (b < d)){
        smallest = b;
    }else if((c < d)){
        smallest = c;
    }else{
        smallest = d;
    } 

    //Approach 2
    greatest = ((a>b) && (a>c) && (a>d))?a:((b > c) && (b > d))?b:(c < d)?c:d;
    smallest = ((a<b) && (a<c) && (a<d))?a:((b < c) && (b < d))?b:(c < d)?c:d;
    printf("Greatest = %d, Smallest = %d", greatest, smallest);  
}