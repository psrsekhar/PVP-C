/**
 * What will be the output of the C program?
    #include<stdio.h>
    int main () {
    enum numbers {n1 = 1.5, n2 = 0, n3, n4, n5, n6};
    printf("%d %d\n", n1, n2);
    }
 */
#include <stdio.h>
int main()
{
   enum numbers
   {
      n1 = 1.5,
      n2 = 0,
      n3,
      n4,
      n5,
      n6
   };
   printf("%d %d\n", n1, n2);
}