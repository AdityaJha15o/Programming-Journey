#include <stdio.h>
int main()
{
    int number;
    int result;
    printf("Enter a number: ");
    scanf("%d", &number);
    result = ~number;
    printf("\n~%d = %d\n", number, result);
    return 0;
}