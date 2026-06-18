#include <stdio.h>
int main()
{
    float obtained, total;
    printf("Enter Obtained Marks: ");
    scanf("%f", &obtained);
    printf("Enter Total Marks: ");
    scanf("%f", &total);
    printf("Percentage = %.2f%%\n",
    (obtained / total) * 100);
    return 0;
}