#include <stdio.h>
int main()
{
    float balance;
    printf("Enter account balance: ");
    scanf("%f", &balance);
    if (balance >= 1000)
    {
        printf("Minimum balance is maintained.\n");
    }
    else
    {
        printf("Minimum balance is not maintained.\n");
    }
    return 0;
}