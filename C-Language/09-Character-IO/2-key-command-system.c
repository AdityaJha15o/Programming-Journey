#include <stdio.h>
int main()
{
    char command;
    printf("S - Start\n");
    printf("P - Pause\n");
    printf("Q - Quit\n\n");
    printf("Enter Command: ");
    command = getchar();
    printf("\nCommand Received: ");
    putchar(command);
    putchar('\n');
    return 0;
}