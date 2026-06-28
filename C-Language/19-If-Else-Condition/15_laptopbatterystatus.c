#include <stdio.h>
int main()
{
    int batteryPercentage;
    printf("Enter battery percentage: ");
    scanf("%d", &batteryPercentage);
    if (batteryPercentage >= 30)
    {
        printf("Battery level is sufficient.\n");
    }
    else
    {
        printf("Connect the charger.\n");
    }
    return 0;
}