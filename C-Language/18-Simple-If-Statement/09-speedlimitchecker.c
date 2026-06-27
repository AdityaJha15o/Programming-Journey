#include <stdio.h>
int main()
{
    int speed;
    printf("Enter vehicle speed: ");
    scanf("%d", &speed);
    if (speed > 80)
    {
        printf("Speed limit exceeded.\n");
    }
    return 0;
}