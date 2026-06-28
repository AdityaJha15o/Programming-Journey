#include <stdio.h>
int main()
{
    float orderAmount;
    printf("Enter order amount: ");
    scanf("%f", &orderAmount);
    if (orderAmount >= 499)
    {
        printf("You are eligible for free delivery.\n");
    }
    else
    {
        printf("Delivery charges will be applied.\n");
    }
    return 0;
}