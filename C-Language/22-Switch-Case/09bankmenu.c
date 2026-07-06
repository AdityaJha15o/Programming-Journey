#include<stdio.h>
int main()
{
    int choice;
    float balance = 25000;
    float amount;
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Mini Statement\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("\nAvailable Balance = Rs %.2f\n",balance);
            break;
        case 2:
            printf("Enter amount to deposit: ");
            scanf("%f",&amount);
            balance = balance + amount;
            printf("\nAmount Deposited = Rs %.2f\n",amount);
            printf("Current Balance = Rs %.2f\n",balance);
            break;
        case 3:
            printf("Enter amount to withdraw: ");
            scanf("%f",&amount);
            if(amount<=balance)
            {
                balance = balance - amount;
                printf("\nAmount Withdrawn = Rs %.2f\n",amount);
                printf("Remaining Balance = Rs %.2f\n",balance);
            }
            else
            {
                printf("\nInsufficient Balance\n");
            }
            break;
        case 4:
            printf("\nLast Transaction : Deposit Rs 5000\n");
            printf("Available Balance : Rs %.2f\n",balance);
            break;
        default:
            printf("\nInvalid Choice\n");
    }
    return 0;
}