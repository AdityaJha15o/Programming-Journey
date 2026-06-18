#include <stdio.h>
int main()
{
    float basicSalary, bonus;
    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);
    printf("Enter Bonus: ");
    scanf("%f", &bonus);
    printf("Total Salary = %.2f\n",
           basicSalary + bonus);
    return 0;
}