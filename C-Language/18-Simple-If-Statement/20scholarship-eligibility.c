#include <stdio.h>
int main()
{
    float percentage;
    printf("Enter your percentage: ");
    scanf("%f", &percentage);
    if (percentage >= 90)
    {
        printf("You are eligible to apply for the scholarship.\n");
    }
    return 0;
}