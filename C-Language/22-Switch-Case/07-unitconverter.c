#include<stdio.h>
int main()
{
    int choice;
    float value;
    float result;
    printf("1. Kilometer to Meter\n");
    printf("2. Meter to Kilometer\n");
    printf("3. Kilogram to Gram\n");
    printf("4. Gram to Kilogram\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    printf("Enter value: ");
    scanf("%f",&value);
    switch(choice)
    {
        case 1:
            result = value * 1000;
            printf("\n%.2f Kilometer = %.2f Meter\n", value, result);
            break;
        case 2:
            result = value / 1000;
            printf("\n%.2f Meter = %.2f Kilometer\n", value, result);
            break;
        case 3:
            result = value * 1000;
            printf("\n%.2f Kilogram = %.2f Gram\n", value, result);
            break;
        case 4:
            result = value / 1000;
            printf("\n%.2f Gram = %.2f Kilogram\n", value, result);
            break;
        default:
            printf("\nInvalid choice.\n");
    }
    return 0;
}