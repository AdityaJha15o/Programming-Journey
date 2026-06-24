#include <stdio.h>
int main()
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    printf("%d\n", age >= 18 && age <= 60);
    return 0;
}