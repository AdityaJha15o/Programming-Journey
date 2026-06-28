#include <stdio.h>
int main()
{
    int marks;
    int attendance;
    printf("Enter marks: ");
    scanf("%d", &marks);
    printf("Enter attendance percentage: ");
    scanf("%d", &attendance);
    if (marks >= 33)
    {
        if (attendance >= 85)
        {
            printf("Student passed and is eligible for the next semester.\n");
        }
        else
        {
            printf("Attendance requirement not satisfied.\n");
        }
    }
    else
    {
        printf("Student failed the examination.\n");
    }
    return 0;
}