#include <stdio.h>
int main()
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    printf("%d\n", number == 0 || number == 100);
    return 0;
}