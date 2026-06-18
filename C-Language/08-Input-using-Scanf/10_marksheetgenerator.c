#include <stdio.h>
int main()
{
    int math, science, english, hindi, maithili;
    int total;
    printf("Enter marks for Math:     ");
    scanf("%d", &math);
    printf("Enter marks for science:  ");
    scanf("%d", &science);
    printf("Enter marks for English:  ");
    scanf("%d", &english);
    printf("Enter marks for Hindi:    ");
    scanf("%d", &hindi);
    printf("Enter marks for Maithili: ");
    scanf("%d", &maithili);
    total = math + science + english + hindi + maithili;
    printf("Total Marks = %d\n", total);
    return 0;
}