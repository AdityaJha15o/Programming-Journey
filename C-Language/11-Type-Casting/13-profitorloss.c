#include <stdio.h>
int main()
{
    float costPrice, sellingPrice;
    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);
    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);
    float result = sellingPrice - costPrice;
    printf("Profit/Loss = %.2f\n", result);
    return 0;
}