#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    (number>=0) ? printf("Positive Number\n") : printf("Negative Number\n");
    return 0;
}