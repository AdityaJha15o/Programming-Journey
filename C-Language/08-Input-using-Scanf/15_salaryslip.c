#include <stdio.h>
int main()
{
    int employeeId;
    float basicSalary;
    float bonus;
    printf("Enter Employee ID: ");
    scanf("%d", &employeeId);
    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);
    printf("Enter Bonus: ");
    scanf("%f", &bonus);
    printf("SALARY SLIP\n");
    printf("Employee ID : %d\n", employeeId);
    printf("Basic Salary: %.2f\n", basicSalary);
    printf("Bonus       : %.2f\n", bonus);
    printf("Total Salary: %.2f\n", basicSalary + bonus);
    return 0;
}