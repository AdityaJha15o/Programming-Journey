#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    ch = getchar();
    printf("Previous Character : %c\n", ch - 1);
    printf("Current Character  : %c\n", ch);
    printf("Next Character     : %c\n", ch + 1);
    return 0;
}