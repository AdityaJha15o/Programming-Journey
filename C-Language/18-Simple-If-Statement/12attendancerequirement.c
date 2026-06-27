#include <stdio.h>
int main()
{
    float attendance;
    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);
    if (attendance >= 75)
    {
        printf("Student can appear in the examination.\n");
    }
    return 0;
}