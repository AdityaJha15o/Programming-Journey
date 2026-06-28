#include <stdio.h>
int main()
{
    int enteredPassword;
    int correctPassword = 12345;
    printf("Enter your password: ");
    scanf("%d", &enteredPassword);
    if (enteredPassword == correctPassword)
    {
        printf("Verification Successfull.\n");
    }
    else
    {
        printf("Incorrect password.\n");
    }
    return 0;
}