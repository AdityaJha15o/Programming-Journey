#include <stdio.h>
int main()
{
    int units;
    printf("Enter electricity units consumed: ");
    scanf("%d", &units);
    if (units > 500)
    {
        printf("High electricity consumption detected.\n");
    }
    return 0;
}