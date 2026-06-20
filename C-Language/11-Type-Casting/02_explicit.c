#include <stdio.h>
int main()
{
    float price = 199.99;
    printf("Original Price : %.2f\n", price);
    printf("After Casting  : %d\n", (int)price);
    return 0;
}