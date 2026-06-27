#include <stdio.h>
int main()
{
    float withdrawAmount;
    printf("Enter withdrawal amount: ");
    scanf("%f", &withdrawAmount);
    if (withdrawAmount > 20000)
    {
        printf("Transaction exceeds the daily withdrawal limit.\n");
    }
    return 0;
}