#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    ch = getchar();
    printf("| Character | ASCII Code |\n");
    printf("|     %c     |     %3d    |\n", ch, ch);
    return 0;
}