#include <stdio.h>
int main()
{
    int rank;
    printf("Enter student rank: ");
    scanf("%d", &rank);
    if (rank == 1)
    {
        printf("Gold Medal\n");
    }
    else if (rank == 2)
    {
        printf("Silver Medal\n");
    }
    else if (rank == 3)
    {
        printf("Bronze Medal\n");
    }
    else if (rank <= 10)
    {
        printf("Top 10 Rank Holder\n");
    }
    else
    {
        printf("Regular Rank\n");
    }
    return 0;
}