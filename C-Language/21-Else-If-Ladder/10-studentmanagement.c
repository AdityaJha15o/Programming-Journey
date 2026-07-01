#include <stdio.h>

int main()
{
    int choice;
    float marks;
    printf("STUDENT MANAGEMENT\n");
    printf("1. Check Grade\n");
    printf("2. Check Division\n");
    printf("3. Check Scholarship\n");
    printf("4. Check Result\n");
    printf("5. Exit\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 4)
    {
        printf("Enter student percentage: ");
        scanf("%f", &marks);
    }
    if (choice == 1)
    {
        if (marks < 0 || marks > 100)
        {
            printf("Invalid percentage.\n");
        }
        else if (marks >= 90)
        {
            printf("Grade : A+\n");
        }
        else if (marks >= 80)
        {
            printf("Grade : A\n");
        }
        else if (marks >= 70)
        {
            printf("Grade : B\n");
        }
        else if (marks >= 60)
        {
            printf("Grade : C\n");
        }
        else if (marks >= 33)
        {
            printf("Grade : D\n");
        }
        else
        {
            printf("Result : Fail\n");
        }
    }
    else if (choice == 2)
    {
        if (marks >= 60)
        {
            printf("Division : First\n");
        }
        else if (marks >= 45)
        {
            printf("Division : Second\n");
        }
        else if (marks >= 33)
        {
            printf("Division : Third\n");
        }
        else
        {
            printf("Division : Fail\n");
        }
    }
    else if (choice == 3)
    {
        if (marks >= 90)
        {
            printf("Scholarship : 100%% Fee Waiver\n");
        }
        else if (marks >= 80)
        {
            printf("Scholarship : 75%% Fee Waiver\n");
        }
        else if (marks >= 70)
        {
            printf("Scholarship : 50%% Fee Waiver\n");
        }
        else if (marks >= 60)
        {
            printf("Scholarship : 25%% Fee Waiver\n");
        }
        else
        {
            printf("Scholarship : Not Eligible\n");
        }
    }
    else if (choice == 4)
    {
        if (marks >= 33)
        {
            printf("Student Status : Pass\n");
        }
        else
        {
            printf("Student Status : Fail\n");
        }
    }
    else if (choice == 5)
    {
        printf("Program Closed.\n");
    }
    else
    {
        printf("Invalid Choice.\n");
    }
    return 0;
}