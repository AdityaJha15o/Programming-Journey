#include <stdio.h>
int main()
{
    int overdueDays;
    printf("Enter overdue days: ");
    scanf("%d", &overdueDays);
    if (overdueDays > 0)
    {
        printf("Library fine is applicable.\n");
    }
    return 0;
}