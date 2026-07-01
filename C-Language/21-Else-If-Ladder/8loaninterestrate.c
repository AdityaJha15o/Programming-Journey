#include <stdio.h>
int main()
{
    float loanAmount;
    float interestRate;
    float interestAmount;
    printf("Enter loan amount: ");
    scanf("%f", &loanAmount);
    if (loanAmount <= 100000)
    {
        interestRate = 8;
    }
    else if (loanAmount <= 500000)
    {
        interestRate = 10;
    }
    else
    {
        interestRate = 12;
    }
    interestAmount = (loanAmount * interestRate) / 100;
    printf("Interest Rate   : %.0f%%\n", interestRate);
    printf("Interest Amount : Rs. %.2f\n", interestAmount);
    return 0;
}