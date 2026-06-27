#include <stdio.h>
int main()
{
    float dueAmount;
    printf("Enter pending fee amount: ");
    scanf("%f", &dueAmount);
    if (dueAmount > 0)
    {
        printf("Student has pending fees to pay.\n");
    }
    return 0;
}