#include<stdio.h>
int main()
{
    int student1;
    int student2;
    int highest;
    printf("Enter marks of first student: ");
    scanf("%d",&student1);
    printf("Enter marks of second student: ");
    scanf("%d",&student2);
    highest = (student1>student2) ? student1 : student2;
    printf("Highest Marks = %d\n",highest);
    return 0;
}