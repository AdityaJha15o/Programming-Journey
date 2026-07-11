#include<stdio.h>
int main()
{
    int choice;
    char ch;
    printf("1. Check Alphabet\n");
    printf("2. Check Digit\n");
    printf("3. Check Special Character\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    printf("Enter a character: ");
    scanf(" %c",&ch);
    switch(choice)
    {
        case 1:
            if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
            {
                printf("\n%c is an Alphabet.\n",ch);
            }
            else
            {
                printf("\n%c is not an Alphabet.\n",ch);
            }
            break;
        case 2:
            if(ch>='0' && ch<='9')
            {
                printf("\n%c is a Digit.\n",ch);
            }
            else
            {
                printf("\n%c is not a Digit.\n",ch);
            }
            break;
        case 3:
            if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') || (ch>='0' && ch<='9'))
            {
                printf("\n%c is not a Special Character.\n",ch);
            }
            else
            {
                printf("\n%c is a Special Character.\n",ch);
            }
            break;
        default:
            printf("\nInvalid Choice.\n");
    }
    return 0;
}