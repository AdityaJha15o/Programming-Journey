#include <stdio.h>
int main()
{
    float walletBalance;
    float orderAmount;
    printf("Enter wallet balance: ");
    scanf("%f", &walletBalance);
    printf("Enter order amount: ");
    scanf("%f", &orderAmount);
    if (walletBalance >= orderAmount)
    {
        if (orderAmount >= 499)
        {
            printf("Order placed with free delivery.\n");
        }
        else
        {
            printf("Order placed successfully.\n");
        }
    }
    else
    {
        printf("Insufficient wallet balance.\n");
    }
    return 0;
}