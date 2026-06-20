#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    printf("Character : %c\n", ch);
    printf("Ascii     : %d\n", (int)ch);
    return 0;
}