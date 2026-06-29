#include <stdio.h>
int main()
{
    int age;
    int validId;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Do you have a valid ID? (1 = Yes, 0 = No): ");
    scanf("%d", &validId);
    if (age >= 18)
    {
        if (validId == 1)
        {
            printf("Hotel booking confirmed.\n");
        }
        else
        {
            printf("Valid ID is required for check-in.\n");
        }
    }
    else
    {
        printf("Guest must be at least 18 years old.\n");
    }
    return 0;
}