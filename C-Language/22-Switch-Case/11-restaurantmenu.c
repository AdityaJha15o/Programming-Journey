#include<stdio.h>
int main()
{
    int choice;
    int quantity;
    float total;
    printf("1. Veg Thali     Rs 120\n");
    printf("2. Chicken Biryani Rs 220\n");
    printf("3. Fried Rice    Rs 150\n");
    printf("4. Cold Drink    Rs 40\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    printf("Enter quantity: ");
    scanf("%d",&quantity);
    switch(choice)
    {
        case 1:
            total = quantity * 120;
            printf("\nItem : Veg Thali\n");
            printf("Quantity : %d\n",quantity);
            printf("Total Bill : Rs %.2f\n",total);
            break;
        case 2:
            total = quantity * 220;
            printf("\nItem : Chicken Biryani\n");
            printf("Quantity : %d\n",quantity);
            printf("Total Bill : Rs %.2f\n",total);
            break;
        case 3:
            total = quantity * 150;
            printf("\nItem : Fried Rice\n");
            printf("Quantity : %d\n",quantity);
            printf("Total Bill : Rs %.2f\n",total);
            break;
        case 4:
            total = quantity * 40;
            printf("\nItem : Cold Drink\n");
            printf("Quantity : %d\n",quantity);
            printf("Total Bill : Rs %.2f\n",total);
            break;
        default:
            printf("\nInvalid Choice\n");
    }
    return 0;
}