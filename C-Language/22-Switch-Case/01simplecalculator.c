#include <stdio.h>

int main()
{
    float firstNumber, secondNumber;
    int choice;

    printf("SIMPLE CALCULATOR\n");
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

    switch (choice)
    {
        case 1:
            printf("Result = %.2f\n", firstNumber + secondNumber);
            break;

        case 2:
            printf("Result = %.2f\n", firstNumber - secondNumber);
            break;

        case 3:
            printf("Result = %.2f\n", firstNumber * secondNumber);
            break;

        case 4:
            if (secondNumber == 0)
            {
                printf("Division by zero is not allowed.\n");
            }
            else
            {
                printf("Result = %.2f\n", firstNumber / secondNumber);
            }
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}