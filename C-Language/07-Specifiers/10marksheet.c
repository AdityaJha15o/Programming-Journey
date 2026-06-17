#include <stdio.h>

int main()
{
    printf("                         MARK SHEET\n");

    printf("Student Name : Aditya Kumar Jha\n");
    printf("Father Name  : Govind Kumar Jha\n");
    printf("Date of Birth: 15/10/2007\n\n");
    printf("%-20s %-10s %-10s\n", "Subject", "Full", "Obtained");


    printf("%-20s %-10d %-10d\n", "Maithili", 100, 55);
    printf("%-20s %-10d %-10d\n", "Hindi", 100, 53);
    printf("%-20s %-10d %-10d\n", "Mathematics", 100, 56);
    printf("%-20s %-10d %-10d\n", "Science", 100, 66);
    printf("%-20s %-10d %-10d\n", "Social Science", 100, 30);

    printf("\n \n");
    printf("%-20s %-10d %-10d\n", "Aggregate", 500, 260);
    printf("\n \n");


    printf("Result : %s\n", "Second Division");

    return 0;
}