#include <stdio.h>
int main()
{
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);
    printf("Area = %.2f\n", 3.14159 * radius * radius);
    return 0;
}