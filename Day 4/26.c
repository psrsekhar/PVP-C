/**
 * Develop a C function to print Fibonacci series.
 * Note: The series is said to be Fibonacci series in which each number is the sum of the two preceding ones.
 * Example: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34,..
 */
#include <stdio.h>
void generateFibonacciSeries(int n)
{
    int ft = 0, st = 1, nt = 0;
    if (n > 0)
    {
        printf("%d\t%d\t", ft, st);
        if (n == 1)
        {
            printf("%d", (ft + st));
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                nt = ft + st;
                printf("%d\t", nt);
                ft = st;
                st = nt;
            }
        }
    }
}
void main()
{
    int n;
    printf("enter size of series:");
    scanf("%d", &n);
    generateFibonacciSeries(n);
}