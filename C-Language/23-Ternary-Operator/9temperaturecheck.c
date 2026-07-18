#include<stdio.h>
int main()
{
    float temperature;
    printf("Enter temperature: ");
    scanf("%f",&temperature);
    (temperature>=30) ? printf("Hot Weather\n")
                      : printf("Normal Weather\n");

    return 0;
}