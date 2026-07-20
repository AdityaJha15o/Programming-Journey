#include<stdio.h>
int main()
{
    int number;
    int originalNumber;
    int reverse = 0;
    int digit;
    printf("Enter a number: ");
    scanf("%d",&number);
    originalNumber = number;
    while(number != 0)
    {
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number = number / 10;
    }
    if(originalNumber == reverse)
    {
        printf("%d is a Palindrome Number.\n",originalNumber);
    }
    else
    {
        printf("%d is not a Palindrome Number.\n",originalNumber);
    }
    return 0;
}