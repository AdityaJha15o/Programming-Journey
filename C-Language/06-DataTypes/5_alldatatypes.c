#include <stdio.h>
int main()
{
    char grade = 'A';
    int age = 20;
    float cgpa = 8.45f;
    double salary = 50000.987654;
    printf("Grade  : %c\n", grade);
    printf("Age    : %d\n", age);
    printf("CGPA   : %.2f\n", cgpa);
    printf("Salary : %.6lf\n", salary);
    return 0;
}