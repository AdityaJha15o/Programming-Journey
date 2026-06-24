#include <stdio.h>
int main()
{
    int balance = 51000;
    printf("Current Balance = %d\n", balance);
    balance += 2500;
    printf("After Deposit = %d\n", balance);
    balance -= 1000;
    printf("After Withdrawal = %d\n", balance);
    return 0;
}