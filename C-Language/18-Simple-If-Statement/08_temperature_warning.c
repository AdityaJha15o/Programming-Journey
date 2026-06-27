#include <stdio.h>
int main()
{
    float temperature;
    printf("Enter current temperature: ");
    scanf("%f", &temperature);
    if (temperature >= 40)
    {
        printf("High temperature warning.\n");
    }
    return 0;
}