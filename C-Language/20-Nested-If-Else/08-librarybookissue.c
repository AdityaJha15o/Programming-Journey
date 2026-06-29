#include <stdio.h>
int main()
{
    int membershipActive;
    float pendingFine;
    printf("Is your library membership active? (1 = Yes, 0 = No): ");
    scanf("%d", &membershipActive);
    printf("Enter pending fine amount: ");
    scanf("%f", &pendingFine);
    if (membershipActive == 1)
    {
        if (pendingFine == 0)
        {
            printf("Book issued successfully.\n");
        }
        else
        {
            printf("Please clear the pending fine first.\n");
        }
    }
    else
    {
        printf("Activate your library membership first.\n");
    }
    return 0;
}