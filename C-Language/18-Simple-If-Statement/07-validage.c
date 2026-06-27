#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 1 && age <= 120)
    {
        printf("Age entered is valid.\n");
    }
    return 0;
}