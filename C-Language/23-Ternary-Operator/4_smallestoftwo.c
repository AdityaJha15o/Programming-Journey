#include<stdio.h>
int main()
{
    int first;
    int second;
    int smallest;
    printf("Enter first number: ");
    scanf("%d",&first);
    printf("Enter second number: ");
    scanf("%d",&second);
    smallest = (first<second) ? first : second;
    printf("Smallest Number = %d\n",smallest);
    return 0;
}