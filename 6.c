#include<stdio.h>
void main(){
    int a, b, c, largest;
    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b); 
    printf("enter c: ");
    scanf("%d", &c);
    largest = ((a>b) && (a>c)) ? a : (b>c) ? b: c;
    printf("%d", largest);
}