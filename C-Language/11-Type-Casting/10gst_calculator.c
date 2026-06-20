#include <stdio.h>
int main()
{
    float price;
    printf("Enter product price: ");
    scanf("%f", &price);
    int gstRate = 18;
    float gstAmount = (float)price * gstRate / 100;
    printf("GST Amount = %.2f\n", gstAmount);
    printf("Final Price = %.2f\n", price + gstAmount);
    return 0;
}