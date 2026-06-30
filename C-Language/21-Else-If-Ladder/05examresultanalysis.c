#include <stdio.h>
int main()
{
    float percentage;
    printf("Enter percentage: ");
    scanf("%f", &percentage);
    if (percentage >= 90)
    {
        printf("Excellent Performance\n");
    }
    else if (percentage >= 75)
    {
        printf("Very Good Performance\n");
    }
    else if (percentage >= 60)
    {
        printf("Good Performance\n");
    }
    else if (percentage >= 33)
    {
        printf("Average Performance\n");
    }
    else
    {
        printf("Needs Improvement\n");
    }
    return 0;
}