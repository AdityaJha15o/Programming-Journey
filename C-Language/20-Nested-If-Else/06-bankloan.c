#include <stdio.h>
int main()
{
    float monthlyIncome;
    int creditScore;
    printf("Enter monthly income: ");
    scanf("%f", &monthlyIncome);
    printf("Enter credit score: ");
    scanf("%d", &creditScore);
    if (monthlyIncome >= 30000)
    {
        if (creditScore >= 700)
        {
            printf("Loan approved.\n");
        }
        else
        {
            printf("Credit score is too low.\n");
        }
    }
    else
    {
        printf("Income criteria not met.\n");
    }
    return 0;
}