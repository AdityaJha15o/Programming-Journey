#include <stdio.h>
int main()
{
    int availableSeats;
    int validId;
    printf("Enter available seats: ");
    scanf("%d", &availableSeats);
    printf("Do you have a valid ID? (1 = Yes, 0 = No): ");
    scanf("%d", &validId);
    if (availableSeats > 0)
    {
        if (validId == 1)
        {
            printf("Ticket booked successfully.\n");
        }
        else
        {
            printf("A valid ID is required for booking.\n");
        }
    }
    else
    {
        printf("No seats available.\n");
    }
    return 0;
}