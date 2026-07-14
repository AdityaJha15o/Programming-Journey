#include<stdio.h>
int main()
{
    int choice;
    int a,b;
    printf("1. Find Maximum\n");
    printf("2. Find Minimum\n");
    printf("3. Find Remainder\n");
    printf("4. Find Average\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    switch(choice)
    {
        case 1:
            if(a>b)
                printf("\nMaximum = %d\n",a);
            else
                printf("\nMaximum = %d\n",b);
            break;
        case 2:
            if(a<b)
                printf("\nMinimum = %d\n",a);
            else
                printf("\nMinimum = %d\n",b);
            break;
        case 3:
            printf("\nRemainder = %d\n",a%b);
            break;
        case 4:
            printf("\nAverage = %.2f\n",(a+b)/2.0);
            break;
        default:
            printf("\nInvalid Choice.\n");
    }
    return 0;
}