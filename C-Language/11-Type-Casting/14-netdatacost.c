#include <stdio.h>
int main()
{
    float gb;
    float rate;
    printf("Enter data used (GB): ");
    scanf("%f", &gb);
    printf("Enter rate per GB: ");
    scanf("%f", &rate);
    float bill = gb * rate;
    printf("Total Cost = %.2f\n", bill);
    return 0;
}