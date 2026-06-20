#include <stdio.h>
#define GST_RATE 18
#define DISCOUNT_RATE 10
int main()
{
    float price = 5000;
    printf("Price         : %.2f\n", price);
    printf("GST Rate      : %d%%\n", GST_RATE);
    printf("Discount Rate : %d%%\n", DISCOUNT_RATE);
    return 0;
}