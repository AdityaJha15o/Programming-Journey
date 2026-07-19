#include<stdio.h>
int main()
{
    int limit;
    int i = 2;
    printf("Print even numbers up to: ");
    scanf("%d",&limit);
    while(i <= limit)
    {
        printf("%d ",i);
        i = i + 2;
    }
    return 0;
}