#include <stdio.h>
int main()
{
    float salary;
    int experience;
    printf("Enter monthly salary: ");
    scanf("%f", &salary);
    printf("Enter years of experience: ");
    scanf("%d", &experience);
    if (salary >= 30000)
    {
        if (experience >= 2)
        {
            printf("Employee is eligible for the annual bonus.\n");
        }
        else
        {
            printf("More experience is required for the bonus.\n");
        }
    }
    else
    {
        printf("Salary criteria not met.\n");
    }
    return 0;
}