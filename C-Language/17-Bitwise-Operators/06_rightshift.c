#include <stdio.h>
int main()
{
    int number;
    int positions;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter shift positions: ");
    scanf("%d", &positions);
    printf("\nResult = %d\n",number >> positions);
    return 0;
}