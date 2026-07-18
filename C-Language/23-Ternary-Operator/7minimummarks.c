#include<stdio.h>
int main()
{
    int student1;
    int student2;
    int lowest;
    printf("Enter marks of first student: ");
    scanf("%d",&student1);
    printf("Enter marks of second student: ");
    scanf("%d",&student2);
    lowest = (student1<student2) ? student1 : student2;
    printf("Lowest Marks = %d\n",lowest);
    return 0;
}