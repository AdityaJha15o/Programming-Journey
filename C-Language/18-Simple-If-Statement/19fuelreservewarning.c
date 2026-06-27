#include <stdio.h>
int main()
{
    float fuelLevel;
    printf("Enter available fuel (in litres): ");
    scanf("%f", &fuelLevel);

    if (fuelLevel < 5)
    {
        printf("Fuel level is low. Please refill soon.\n");
    }
    return 0;
}