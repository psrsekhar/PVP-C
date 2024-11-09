#include <stdio.h>
void main()
{
    char vehicleType;
    float hours;
    int rates;
    printf("enter type of vehicle: ");
    scanf("%c", &vehicleType);
    printf("enter number of hours: ");
    scanf("%f", &hours);
    switch (vehicleType)
    {
        case 'm':
        case 'M':
            rates = 5;
            break;
        case 'c':
        case 'C':
            rates = 10;
            break;
        case 'b':
        case 'B':
            rates = 50;
            break;
        defualt:
            break;
    }
    printf("Total amount to be paid: %f", (hours * rates));
}
