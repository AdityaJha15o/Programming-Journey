#include <stdio.h>
int main()
{
    int enteredPin;
    printf("Enter login PIN: ");
    scanf("%d", &enteredPin);
    if (enteredPin == 1234)
    {
        printf("Login successful.\n");
    }
    else
    {
        printf("Invalid PIN.\n");
    }
    return 0;
}