#include <stdio.h>
int main()
{
    int enteredPin;
    float accountBalance;
    float withdrawAmount;
    printf("Enter ATM PIN: ");
    scanf("%d", &enteredPin);
    if (enteredPin == 1234)
    {
        printf("Enter account balance: ");
        scanf("%f", &accountBalance);

        printf("Enter withdrawal amount: ");
        scanf("%f", &withdrawAmount);

        if (withdrawAmount <= accountBalance)
        {
            printf("Transaction successful.\n");
            printf("Remaining Balance: %.2f\n", accountBalance - withdrawAmount);
        }
        else
        {
            printf("Insufficient balance.\n");
        }
    }
    else
    {
        printf("Invalid PIN.\n");
    }

    return 0;
}