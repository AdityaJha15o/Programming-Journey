#include<stdio.h>
int main()
{
    int base;
    int power;
    int answer = 1;
    int i = 1;
    printf("Enter base: ");
    scanf("%d",&base);
    printf("Enter power: ");
    scanf("%d",&power);
    while(i <= power)
    {
        answer = answer * base;

        i++;
    }
    printf("%d ^ %d = %d\n",base,power,answer);
    return 0;
}