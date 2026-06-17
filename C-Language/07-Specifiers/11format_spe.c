#include <stdio.h>
int main()
{
    int num = 100;
    float price = 99.99f;
    char grade = 'A';
    printf("Integer : %d\n", num);
    printf("Float   : %.2f\n", price);
    printf("Char    : %c\n", grade);
    printf("Hex     : %x\n", num);
    printf("Octal   : %o\n", num);
    return 0;
}