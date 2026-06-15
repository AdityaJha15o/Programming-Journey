#include <stdio.h>
int main()
{
    int marks = 95;
    float percentage = 89.75;
    char grade = 'A';
    printf("Marks      = %d | Address = %p\n", marks, (void *)&marks);
    printf("Percentage = %.2f | Address = %p\n", percentage, (void *)&percentage);
    printf("Grade      = %c | Address = %p\n", grade, (void *)&grade);
    return 0;
}