#include <stdio.h>
#define PI 3.14159
int main()
{
    int choice;
    float length, width, side, radius, base, height, area;

    printf("===== AREA CALCULATOR =====\n");
    printf("1. Rectangle\n");
    printf("2. Square\n");
    printf("3. Circle\n");
    printf("4. Triangle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:
            printf("Enter length: ");
            scanf("%f", &length);

            printf("Enter width: ");
            scanf("%f", &width);

            area = length * width;
            printf("Area = %.2f\n", area);
            break;

        case 2:
            printf("Enter side: ");
            scanf("%f", &side);

            area = side * side;
            printf("Area = %.2f\n", area);
            break;

        case 3:
            printf("Enter radius: ");
            scanf("%f", &radius);

            area = PI * radius * radius;
            printf("Area = %.2f\n", area);
            break;

        case 4:
            printf("Enter base: ");
            scanf("%f", &base);

            printf("Enter height: ");
            scanf("%f", &height);
            area = 0.5 * base * height;
            printf("Area = %.2f\n", area);
            break;
        default:
            printf("Invalid choice.\n");
    }
    return 0;
}