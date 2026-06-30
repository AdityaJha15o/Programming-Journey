#include <stdio.h>
int main()
{
    int passwordCorrect;
    int subscriptionActive;
    printf("Is the password correct? (1 = Yes, 0 = No): ");
    scanf("%d", &passwordCorrect);
    printf("Is the subscription active? (1 = Yes, 0 = No): ");
    scanf("%d", &subscriptionActive);
    if (passwordCorrect == 1)
    {
        if (subscriptionActive == 1)
        {
            printf("Connected to Wi-Fi.\n");
        }
        else
        {
            printf("Renew your subscription.\n");
        }
    }
    else
    {
        printf("Incorrect password.\n");
    }

    return 0;
}