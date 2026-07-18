#include<stdio.h>
int main()
{
    float amount;
    float finalAmount;
    printf("Enter shopping amount: ");
    scanf("%f",&amount);
    finalAmount = (amount>=5000) ? amount-(amount*20/100)
                                 : amount;

    printf("Final Amount = Rs %.2f\n",finalAmount);

    return 0;
}