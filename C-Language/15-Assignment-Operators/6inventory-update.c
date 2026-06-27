#include <stdio.h>
int main()
{
    int stock = 50;
    printf("Current Stock = %d\n", stock);
    stock += 20;
    printf("New Stock = %d\n", stock);
    stock -= 15;
    printf("Remaining Stock = %d\n", stock);
    return 0;
}