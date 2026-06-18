#include <stdio.h>
int main()
{
    float weight, height;
    printf("Enter Weight (kg): ");
    scanf("%f", &weight);
    printf("Enter Height (m): ");
    scanf("%f", &height);
    printf("BMI = %.2f\n",
    weight / (height * height));
    return 0;
}