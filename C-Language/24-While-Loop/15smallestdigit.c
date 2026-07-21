#include<stdio.h>
int main()
{
    int number;
    int digit;
    int smallest = 9;
    printf("Enter a number: ");
    scanf("%d",&number);
    while(number != 0)
    {
        digit = number % 10;
        if(digit < smallest)
        {
            smallest = digit;
        }
        number = number / 10;
    }
    printf("Smallest Digit = %d\n",smallest);
    return 0;
}