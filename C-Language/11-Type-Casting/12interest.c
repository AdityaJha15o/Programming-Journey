#include <stdio.h>
int main()
{
    int p, r, t;
    printf("Enter principal amount: ");
    scanf("%d", &p);
    printf("Enter rate: ");
    scanf("%d", &r);
    printf("Enter time: ");
    scanf("%d", &t);
    float si = (float)(p * r * t) / 100;
    printf("Simple Interest = %.2f\n", si);
    return 0;
}