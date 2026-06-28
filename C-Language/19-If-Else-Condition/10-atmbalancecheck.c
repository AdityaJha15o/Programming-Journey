#include <stdio.h>
int main()
{
    float accountBalance;
    printf("Enter your account balance: ");
    scanf("%f", &accountBalance);
    if (accountBalance >= 500)
    {
        printf("You can withdraw money.\n");
    }
    else
    {
        printf("Insufficient balance.\n");
    }
    return 0;
}