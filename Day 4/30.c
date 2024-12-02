/**
 * Define recursion and explain how it works in C programming. Mention the advantages and disadvantages of Recursion. Making use of recursion to:  
    a. Print the first N natural numbers. 
    b. Find the factorial of a given number 
    c. Generate Fibonacci numbers up to N. 
    d. Find Greatest Common Divisor 
    e. Reverse a given integer number.
 */
#include <stdio.h>
int factorial(int n){
   if(n == 0)//Base case
   {
      return 1;
   }
   return n*factorial(n-1);//recursive case
}

int fibonacci(int n){
   if(n <= 1)//Base case
   {
      return n;
   }
   return fibonacci(n-1) + fibonacci(n-2);//Recursive case
}

void main(){
   int n = 5;
   //printf("Factorial of %d is : %d", n, factorial(n));
   for(int i=0; i<n; i++){
      printf("%d", fibonacci(i));
   }
}