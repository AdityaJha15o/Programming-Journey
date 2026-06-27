#include <stdio.h>
int main()
{
    int age;
    float weight;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your weight (kg): ");
    scanf("%f", &weight);
    if (age >= 18 && weight >= 50)
    {
        printf("You are eligible to donate blood.\n");
    }
    return 0;
}