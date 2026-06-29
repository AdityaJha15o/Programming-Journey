#include <stdio.h>
int main()
{
    float percentage;
    int documentsSubmitted;
    printf("Enter 12th percentage: ");
    scanf("%f", &percentage);
    printf("Have you submitted all documents? (1 = Yes, 0 = No): ");
    scanf("%d", &documentsSubmitted);
    if (percentage >= 60)
    {
        if (documentsSubmitted == 1)
        {
            printf("Admission approved.\n");
        }
        else
        {
            printf("Please submit all required documents.\n");
        }
    }
    else
    {
        printf("Admission criteria not met.\n");
    }
    return 0;
}