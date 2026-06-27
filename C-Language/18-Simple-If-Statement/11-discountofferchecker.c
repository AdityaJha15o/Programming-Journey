#include <stdio.h>
int main()
{
    float purchaseAmount;
    printf("Enter purchase amount: ");
    scanf("%f", &purchaseAmount);
    if (purchaseAmount >= 5000)
    {
        printf("Customer is eligible for a discount offer.\n");
    }
    return 0;
}