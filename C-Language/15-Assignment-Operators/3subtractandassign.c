#include <stdio.h>
int main()
{
    int wallet = 500;
    printf("Wallet Balance = %d\n", wallet);
    wallet -= 120;
    printf("After Purchase = %d\n", wallet);
    return 0;
}