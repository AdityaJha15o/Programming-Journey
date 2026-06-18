#include <stdio.h>
int main()
{
    float units, rate, bill;
    printf("Enter Units Consumed: ");
    scanf("%f", &units);
    printf("Enter Rate per Unit:  ");
    scanf("%f", &rate);
    bill = units * rate;
    printf("Total Bill = %.2f\n", bill);
    return 0;
}