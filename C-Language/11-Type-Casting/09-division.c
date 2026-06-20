#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    printf("Without Casting = %d\n", a / b);
    printf("With Casting    = %.2f\n", (float)a / b);
    return 0;
}