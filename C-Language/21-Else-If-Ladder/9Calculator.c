#include <stdio.h>
int main()
{
    int choice;
    float firstNumber, secondNumber;
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    printf("Enter first number: ");
    scanf("%f", &firstNumber);
    printf("Enter second number: ");
    scanf("%f", &secondNumber);
    if (choice == 1)
    {
        printf("Result = %.2f\n", firstNumber + secondNumber);
    }
    else if (choice == 2)
    {
        printf("Result = %.2f\n", firstNumber - secondNumber);
    }
    else if (choice == 3)
    {
        printf("Result = %.2f\n", firstNumber * secondNumber);
    }
    else if (choice == 4)
    {
        if (secondNumber == 0)
        {
            printf("Division by zero is not allowed.\n");
        }
        else
        {
            printf("Result = %.2f\n", firstNumber / secondNumber);
        }
    }
    else
    {
        printf("Invalid choice.\n");
    }
    return 0;
}