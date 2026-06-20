#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    float newAge = (float)age;
    printf("Age as Integer : %d\n", age);
    printf("Age as Float   : %.2f\n", newAge);
    return 0;
}