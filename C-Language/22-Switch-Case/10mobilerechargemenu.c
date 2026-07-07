#include<stdio.h>
int main()
{
    int choice;
    printf("1. Rs 199 Pack\n");
    printf("2. Rs 299 Pack\n");
    printf("3. Rs 399 Pack\n");
    printf("4. Rs 599 Pack\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("\nRecharge Successful\n");
            printf("Plan : Rs 199\n");
            printf("Validity : 28 Days\n");
            break;
        case 2:
            printf("\nRecharge Successful\n");
            printf("Plan : Rs 299\n");
            printf("Validity : 28 Days\n");
            break;
        case 3:
            printf("\nRecharge Successful\n");
            printf("Plan : Rs 399\n");
            printf("Validity : 56 Days\n");
            break;
        case 4:
            printf("\nRecharge Successful\n");
            printf("Plan : Rs 599\n");
            printf("Validity : 84 Days\n");
            break;
        default:
            printf("\nInvalid Choice\n");
    }
    return 0;
}