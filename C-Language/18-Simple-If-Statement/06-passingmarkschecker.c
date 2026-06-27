#include <stdio.h>
int main()
{
    int marks;
    printf("Enter obtained marks: ");
    scanf("%d", &marks);
    if (marks >= 22)
    {
        printf("Student has passed the examination.\n");
    }
    return 0;
}