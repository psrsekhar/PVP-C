/**
 * Determine the output of the following program:
    #include<stdio.h>
    void main () {
    union a {
    int i;
    char ch[2];
    };
    union a u;
    u.ch[0]=3;
    u.ch[1]=2;
    printf("%d, %d, %d\n", u.ch[0], u.ch[1], u.i);
    }
 */
#include <stdio.h>
void main()
{
   union a
   {
      int i;
      char ch[2];
   };
   union a u;
   u.ch[0] = 3;
   u.ch[1] = 2;
   printf("%d, %d, %d\n", u.ch[0], u.ch[1], u.i);
}