#include <stdio.h>
int main()
{
    float percentage;
    printf("Enter percentage: ");
    scanf("%f", &percentage);
    if (percentage < 0 || percentage > 100)
    {
        printf("Invalid percentage.\n");
    }
    else if (percentage >= 60)
    {
        printf("First Division\n");
    }
    else if (percentage >= 45)
    {
        printf("Second Division\n");
    }
    else if (percentage >= 33)
    {
        printf("Third Division\n");
    }
    else
    {
        printf("Fail\n");
    }
    return 0;
}