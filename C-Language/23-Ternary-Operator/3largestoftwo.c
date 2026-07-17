#include<stdio.h>
int main()
{
    int first;
    int second;
    int largest;
    printf("Enter first number: ");
    scanf("%d",&first);
    printf("Enter second number: ");
    scanf("%d",&second);
    largest = (first>second) ? first : second;
    printf("Largest Number = %d\n",largest);
    return 0;
}