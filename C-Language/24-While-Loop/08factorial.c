#include<stdio.h>
int main()
{
    int number;
    int i = 1;
    long long factorial = 1;
    printf("Enter a number: ");
    scanf("%d",&number);
    while(i <= number)
    {
        factorial = factorial * i;
        i++;
    }
    printf("Factorial of %d = %lld\n",number,factorial);
    return 0;
}