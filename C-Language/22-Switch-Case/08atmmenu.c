#include<stdio.h>
int main()
{
    int choice;
    int pin;
    float balance = 12000;
    float amount;
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    printf("Enter ATM PIN: ");
    scanf("%d",&pin);
    if(pin != 1234)
    {
        printf("\nWrong PIN.\n");
        return 0;
    }
    switch(choice)
    {
        case 1:
            printf("\nAvailable Balance = Rs %.2f\n", balance);
            break;
        case 2:
            printf("Enter amount to deposit: ");
            scanf("%f",&amount);
            balance = balance + amount;
            printf("\nMoney Deposited Successfully.\n");
            printf("Current Balance = Rs %.2f\n", balance);
            break;
        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%f",&amount);
            if(amount <= balance)
            {
                balance = balance - amount;
                printf("\nPlease collect your cash.\n");
                printf("Remaining Balance = Rs %.2f\n", balance);
            }
            else
            {
                printf("\nInsufficient Balance.\n");
            }
            break;
        case 4:
            printf("\nThank you for using the ATM.\n");
            break;
        default:
            printf("\nInvalid choice.\n");
    }
    return 0;
} 