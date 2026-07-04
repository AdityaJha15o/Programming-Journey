#include<stdio.h>
int main()
{
    int choice;
    float amount;
    float result;
    printf("1. INR to USD\n");
    printf("2. USD to INR\n");
    printf("3. INR to Euro\n");
    printf("4. Euro to INR\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    printf("Enter amount: ");
    scanf("%f",&amount);
    switch(choice)
    {
        case 1:
            result = amount / 86;

            printf("\n%.2f INR = %.2f USD\n", amount, result);
            break;
        case 2:
            result = amount * 86;
            printf("\n%.2f USD = %.2f INR\n", amount, result);
            break;
        case 3:
            result = amount / 100;
            printf("\n%.2f INR = %.2f Euro\n", amount, result);
            break;
        case 4:
            result = amount * 100;
            printf("\n%.2f Euro = %.2f INR\n", amount, result);
            break;
        default:
            printf("\nInvalid choice.\n");
    }
    return 0;
}