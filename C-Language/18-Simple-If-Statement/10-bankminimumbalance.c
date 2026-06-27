#include <stdio.h>
int main()
{
    float accountBalance;
    printf("Enter current account balance: ");
    scanf("%f", &accountBalance);
    if (accountBalance < 1000)
    {
        printf("Minimum balance warning.\n");
    }
    return 0;
}