#include <stdio.h>
int main()
{
    int attendancePercentage;

    printf("Enter attendance percentage: ");
    scanf("%d", &attendancePercentage);
    if (attendancePercentage >= 85)
    {
        printf("Exam form submission is allowed.\n");
    }
    else
    {
        printf("Attendance requirement not met.\n");
    }

    return 0;
}