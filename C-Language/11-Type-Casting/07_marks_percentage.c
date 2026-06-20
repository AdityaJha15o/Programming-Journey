#include <stdio.h>
int main()
{
    int marks;
    int total;
    printf("Enter obtained marks: ");
    scanf("%d", &marks);
    printf("Enter total marks: ");
    scanf("%d", &total);
    float percentage = (float)marks / total * 100;
    printf("Percentage = %.2f%%\n", percentage);
    return 0;
}