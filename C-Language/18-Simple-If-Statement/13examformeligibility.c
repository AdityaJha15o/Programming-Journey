#include <stdio.h>
int main()
{
    float attendance;
    int feepaid;
    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);
    printf("Enter fee status (1 = Paid): ");
    scanf("%d", &feepaid);
    if (attendance >= 75 && feepaid == 1)
    {
        printf("Student can submit the examination form.\n");
    }
    return 0;
}