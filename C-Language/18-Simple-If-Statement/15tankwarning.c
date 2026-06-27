#include <stdio.h>
int main()
{
    float waterLevel;
    printf("Enter water level (in percentage): ");
    scanf("%f", &waterLevel);
    if (waterLevel < 20)
    {
        printf("Water level is low. Please refill the tank.\n");
    }
    return 0;
} 