#include <stdio.h>
void main()
{
    int i, sum = 0;
    for (i = 1; i <= 10; i++)
    {
        sum += i;
    }
    printf("%d", sum);
}/* Output: 55 */