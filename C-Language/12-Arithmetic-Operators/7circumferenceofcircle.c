#include <stdio.h>
int main()
{
    float radius, circumference;
    printf("Enter radius: ");
    scanf("%f", &radius);
    circumference = 2 * 3.14159 * radius;
    printf("\nCircumference of Circle = %.2f\n", circumference);
    return 0;
}