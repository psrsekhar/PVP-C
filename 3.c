/**
 * Draw the flowchart for solving the following problem: The algorithm reads the following two parameters – (i) Type of the vehicle, (‘M’ or ‘m’ for motorbike, ‘C’ or ‘c’ for car, and ‘B’ or ‘b’ for Bus), and (ii) Number of hours that a vehicle spent in the parking lot. The algorithm should compute the parking charge based on the following parking rates – Rs. 5, Rs.10 and Rs. 50 per hour respectively for motorbike, car and bus.
 */
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
