/**
 * What is the output of the following program?
    void main ( )
    { enum days {MON=-1, TUE, WED=4, THU,FRI,SAT};
    printf("%d, %d, %d, %d, %d, %d", MON, TUE, WED, THU, FRI, SAT);
    }
 */
#include <stdio.h>
void main()
{
   enum days
   {
      MON = -1,
      TUE,
      WED = 4,
      THU,
      FRI,
      SAT
   };
   printf("%d, %d, %d, %d, %d, %d", MON, TUE, WED, THU, FRI, SAT);
}