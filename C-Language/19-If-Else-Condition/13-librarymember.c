#include <stdio.h>
int main()
{
    int membershipStatus;
    printf("Enter membership status (1 = Active, 0 = Inactive): ");
    scanf("%d", &membershipStatus);
    if (membershipStatus == 1)
    {
        printf("You can borrow books.\n");
    }
    else
    {
        printf("Please renew your membership.\n");
    }
    return 0;
}