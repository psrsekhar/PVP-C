/**
 * In a company an employee is paid as follows: 
    -> If his basic salary is less than Rs. 1500, then HRA = 10% of basic salary and DA = 90% of basic salary. 
    -> If his basic salary is either equal to or above Rs. 1500, then HRA = Rs. 500 and DA = 98% of basic salary. 
    If the Employee's basic salary is given as input, write a program to find his gross salary.
    NOTE: Gross Salary = Basic Salary + HRA + DA
 */
#include <stdio.h>
void main(){
   int basic;
   float gross, hra, da;
   printf("enter basic salary: ");
   scanf("%d", &basic);
   if(basic < 1500){
      hra = basic * 0.10;
      da = basic * 0.90;
   }else{
      hra = 500;
      da = basic * 0.98;
   }
   gross = basic + hra + da;
   printf("Gross salary : %f", gross);
}