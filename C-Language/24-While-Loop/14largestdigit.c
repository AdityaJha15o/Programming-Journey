#include<stdio.h>
int main()
{
    int number;
    int digit;
    int largest = 0;
    printf("Enter a number: ");
    scanf("%d",&number);
    while(number != 0)
    {
        digit = number % 10;
        if(digit > largest)
        {
            largest = digit;
        }
        number = number / 10;
    }
    printf("Largest Digit = %d\n",largest);
    return 0;
}