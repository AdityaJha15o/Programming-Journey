#include <stdio.h>
int main()
{
    int attendance;
    int feePaid;
    printf("Enter attendance percentage: ");
    scanf("%d", &attendance);
    printf("Have you paid the examination fee? (1 = Yes, 0 = No): ");
    scanf("%d", &feePaid);
    if (attendance >= 75)
    {
        if (feePaid == 1)
        {
            printf("Exam form submitted successfully.\n");
        }
        else
        {
            printf("Please pay the examination fee.\n");
        }
    }
    else
    {
        printf("Attendance requirement not satisfied.\n");
    }
    return 0;
}