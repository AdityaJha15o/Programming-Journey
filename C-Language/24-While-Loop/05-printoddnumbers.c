#include<stdio.h>
int main()
{
    int limit;
    int i = 1;
    printf("Print odd numbers up to: ");
    scanf("%d",&limit);
    while(i <= limit)
    {
        printf("%d ",i);
        i = i + 2;
    }
    return 0;
}