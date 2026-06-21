#include <stdio.h>
int main()
{
    float price;
    int discount;
    printf("Enter product price: ");
    scanf("%f", &price);
    printf("Enter discount percentage: ");
    scanf("%d", &discount);
    float saved = (float)price * discount / 100;
    printf("Discount Amount = %.2f\n", saved);
    printf("Final Price = %.2f\n", price - saved);
    return 0;
}