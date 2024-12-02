/**
 * Examine the output of the following program:
    #include<stdio.h>
    void main ( )
    {
    enum status {pass, fail, absent};
    enum status stud1, stud2, stud3;
    stud1 = pass;
    stud2 = absent;
    stud3 = fail;
    printf("%d %d %d\n", stud1, stud2, stud3);
    }
 */
#include <stdio.h>
void main()
{
   enum status
   {
      pass,//0
      fail,//1
      absent//2
   };
   enum status stud1, stud2, stud3;
   stud1 = pass;
   stud2 = absent;
   stud3 = fail;
   printf("%d %d %d\n", stud1, stud2, stud3);
}