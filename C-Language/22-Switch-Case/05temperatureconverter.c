#include <stdio.h>
int main()
{
    int choice;
    float temperature;
    printf(" TEMPERATURE CONVERTER \n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("Enter temperature: ");
    scanf("%f", &temperature);
    switch (choice)
    {
        case 1:
            printf("Fahrenheit = %.2f\n", (temperature * 9 / 5) + 32);
            break;

        case 2:
            printf("Celsius = %.2f\n", (temperature - 32) * 5 / 9);
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}