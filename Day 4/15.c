/**
 *  Write a C program to enter two points and then calculate the distance between them.
 * Point -> (x,y)
 */
#include <stdio.h>
#include <math.h>
struct point{
    float x,y;
};
void main(){
    struct point p1, p2;
    p1.x = read();
    p1.y = read();
    p2.x = read();
    p2.y = read();    
    float distance = sqrt(pow((p2.x-p1.x),2) + pow((p2.y-p1.y),2));
    printf("%f", distance);
}

float read(){
    float x;
    printf("enter co-ordinate of a point: ");
    scanf("%f", &x);
    return x;
}