#include <stdio.h>
int main()
{
    int age;
    float weight;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your weight (kg): ");
    scanf("%f", &weight);
    if (age >= 18)
    {
        if (weight >= 50)
        {
            printf("You are eligible to donate blood.\n");
        }
        else
        {
            printf("Minimum weight requirement is 50 kg.\n");
        }
    }
    else
    {
        printf("Minimum age requirement is 18 years.\n");
    }
    return 0;
}