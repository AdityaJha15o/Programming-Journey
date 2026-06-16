#include <stdio.h>
int main()
{
    int employeeId = 1001;
    char grade = 'A';
    float experience = 2.5f;
    double salary = 45000.75;
    printf("Employee ID : %d\n", employeeId);
    printf("Grade       : %c\n", grade);
    printf("Experience  : %.1f Years\n", experience);
    printf("Salary      : %.2lf\n", salary);
    return 0;
}