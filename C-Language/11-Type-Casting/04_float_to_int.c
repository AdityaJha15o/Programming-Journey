#include <stdio.h>
int main()
{
    float weight;
    printf("Enter your weight: ");
    scanf("%f", &weight);
    int wholeWeight = (int)weight;
    printf("Original Weight : %.2f\n", weight);
    printf("After Casting   : %d\n", wholeWeight);
    return 0;
}