#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an alphabet: ");
    scanf(" %c",&ch);
    switch(ch)
    {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("\n%c is a Vowel.\n",ch);
            break;
        default:
            printf("\n%c is a Consonant.\n",ch);
    }
    return 0;
}