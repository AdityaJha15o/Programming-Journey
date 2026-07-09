#include<stdio.h>
int main()
{
    int choice;
    int seats;
    float total;
    printf("1. Silver  Rs 150\n");
    printf("2. Gold    Rs 250\n");
    printf("3. Platinum Rs 400\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    printf("Enter number of seats: ");
    scanf("%d",&seats);
    switch(choice)
    {
        case 1:
            total = seats * 150;
            printf("\nSilver Ticket Booked\n");
            printf("Seats : %d\n",seats);
            printf("Total Amount : Rs %.2f\n",total);
            break;
        case 2:
            total = seats * 250;
            printf("\nGold Ticket Booked\n");
            printf("Seats : %d\n",seats);
            printf("Total Amount : Rs %.2f\n",total);
            break;
        case 3:
            total = seats * 400;
            printf("\nPlatinum Ticket Booked\n");
            printf("Seats : %d\n",seats);
            printf("Total Amount : Rs %.2f\n",total);
            break;
        default:
            printf("\nInvalid Choice\n");
    }
    return 0;
}