#include<stdio.h>
int main()
{
    int number;
    int i = 1;
    printf("Enter a number: ");
    scanf("%d",&number);
    printf("\nTable of %d\n\n",number);
    while(i <= 10)
    {
        printf("%d x %d = %d\n",number,i,number*i);
        i++;
    }
    return 0;
}