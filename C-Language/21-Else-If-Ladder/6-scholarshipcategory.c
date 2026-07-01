#include <stdio.h>
int main()
{
    float percentage;
    printf("Enter percentage: ");
    scanf("%f", &percentage);
    if (percentage >= 90)
    {
        printf("Scholarship: 100%% Tuition Fee Waiver\n");
    }
    else if (percentage >= 80)
    {
        printf("Scholarship: 75%% Tuition Fee Waiver\n");
    }
    else if (percentage >= 70)
    {
        printf("Scholarship: 50%% Tuition Fee Waiver\n");
    }
    else if (percentage >= 60)
    {
        printf("Scholarship: 25%% Tuition Fee Waiver\n");
    }
    else
    {
        printf("Scholarship: Not Eligible\n");
    }
    return 0;
}