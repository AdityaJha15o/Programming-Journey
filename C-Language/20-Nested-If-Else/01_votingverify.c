#include <stdio.h>
int main()
{
    int age;
    int citizen;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Are you an Indian citizen? (1 = Yes, 0 = No): ");
    scanf("%d", &citizen);
    if (age >= 18)
    {
        if (citizen == 1)
        {
            printf("You are eligible to vote.\n");
        }
        else
        {
            printf("Only Indian citizens can vote.\n");
        }
    }
    else
    {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}