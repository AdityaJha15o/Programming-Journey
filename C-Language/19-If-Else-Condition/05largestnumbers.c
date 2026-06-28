#include <stdio.h>
int main()
{
    int firstNumber;
    int secondNumber;
    printf("Enter first number: ");
    scanf("%d", &firstNumber);
    printf("Enter second number: ");
    scanf("%d", &secondNumber);
    if (firstNumber > secondNumber)
    {
        printf("%d is larger.\n", firstNumber);
    }
    else
    {
        printf("%d is larger.\n", secondNumber);
    }
    return 0;
}