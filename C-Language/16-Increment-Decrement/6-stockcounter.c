#include <stdio.h>
int main()
{
    int stock;
    printf("Enter available stock: ");
    scanf("%d", &stock);
    printf("\nCurrent Stock : %d\n", stock);
    stock--;
    printf("After Selling One Item : %d\n", stock);
    return 0;
}