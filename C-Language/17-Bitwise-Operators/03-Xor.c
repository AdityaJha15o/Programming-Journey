#include <stdio.h>
int main()
{
    int firstNumber;
    int secondNumber;
    int result;
    printf("Enter first number: ");
    scanf("%d", &firstNumber);
    printf("Enter second number: ");
    scanf("%d", &secondNumber);
    result = firstNumber ^ secondNumber;
    printf("\n%d ^ %d = %d\n", firstNumber,secondNumber, result);
    return 0;
}