#include <stdio.h>
int main()
{
    int age;
    int passedTest;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Have you passed the driving test? (1 = Yes, 0 = No): ");
    scanf("%d", &passedTest);
    if (age >= 18)
    {
        if (passedTest == 1)
        {
            printf("Driving license approved.\n");
        }
        else
        {
            printf("Please pass the driving test first.\n");
        }
    }
    else
    {
        printf("You are not eligible to apply.\n");
    }
    return 0;
}