#include <stdio.h>
int main()
{
    int firstNumber;
    int secondNumber;
    printf("Enter first number: ");
    scanf("%d", &firstNumber);
    printf("Enter second number: ");
    scanf("%d", &secondNumber);
    if (firstNumber < secondNumber)
    {
        printf("%d is smaller.\n", firstNumber);
    }
    else
    {
        printf("%d is smaller.\n", secondNumber);
    }
    return 0;
}