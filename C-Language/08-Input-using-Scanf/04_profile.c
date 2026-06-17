#include <stdio.h>
int main()
{
    int rollNo;
    float cgpa;
    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);
    printf("Enter CGPA: ");
    scanf("%f", &cgpa);

    printf("\nStudent Information\n");
    printf("Roll Number : %d\n", rollNo);
    printf("CGPA        : %.2f\n", cgpa);

    return 0;
}