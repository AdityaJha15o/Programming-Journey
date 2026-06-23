#include <stdio.h>
int main()
{
    int firstNumber;
    int secondNumber;
    printf("Enter first number: ");
    scanf("%d", &firstNumber);
    printf("Enter second number: ");
    scanf("%d", &secondNumber);
    int sum = firstNumber + secondNumber;
    printf("Sum = %d\n", sum);
    return 0;
}