#include <stdio.h>
int main()
{
    int accountNumber;
    float balance;
    float deposit;
    printf("Enter Account Number: ");
    scanf("%d", &accountNumber);
    printf("Enter Current Balance: ");
    scanf("%f", &balance);
    printf("Enter Deposit Amount: ");
    scanf("%f", &deposit);
    printf("\nACCOUNT SUMMARY\n");
    printf("Account Number : %d\n", accountNumber);
    printf("Current Balance: %.2f\n", balance);
    printf("Deposit Amount : %.2f\n", deposit);
    printf("New Balance    : %.2f\n", balance + deposit);
    return 0;
}