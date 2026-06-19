#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    ch = getchar();
    printf("%c -> %d\n", ch - 2, ch - 2);
    printf("%c -> %d\n", ch - 1, ch - 1);
    printf("%c -> %d\n", ch, ch);
    printf("%c -> %d\n", ch + 1, ch + 1);
    printf("%c -> %d\n", ch + 2, ch + 2);
    return 0;
}