#include <stdio.h>
int main()
{
    int performanceScore;
    printf("Enter performance score (0-100): ");
    scanf("%d", &performanceScore);
    if (performanceScore < 0 || performanceScore > 100)
    {
        printf("Invalid score.\n");
    }
    else if (performanceScore >= 90)
    {
        printf("Performance Rating: Outstanding\n");
    }
    else if (performanceScore >= 75)
    {
        printf("Performance Rating: Excellent\n");
    }
    else if (performanceScore >= 60)
    {
        printf("Performance Rating: Good\n");
    }
    else if (performanceScore >= 40)
    {
        printf("Performance Rating: Average\n");
    }
    else
    {
        printf("Performance Rating: Needs Improvement\n");
    }
    return 0;
}