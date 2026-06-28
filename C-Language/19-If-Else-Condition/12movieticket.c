#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("You can watch this movie.\n");
    }
    else
    {
        printf("Age restriction applies.\n");
    }
    return 0;
}