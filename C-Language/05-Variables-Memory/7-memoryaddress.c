#include <stdio.h>
int main()
{
    int number = 100;
    printf("Value   : %d\n", number);
    printf("Address : %p\n", (void *)&number);
    return 0;
}