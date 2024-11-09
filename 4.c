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

    greatest = ((a>b) && (a>c) && (a>d))?a:((b > c) && (b > d))?b:(c < d)?c:d;
    smallest = ((a<b) && (a<c) && (a<d))?a:((b < c) && (b < d))?b:(c < d)?c:d;
    printf("Greatest = %d, Smallest = %d", greatest, smallest);  
}