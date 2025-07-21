// Print the grade of a student according to his/her marks.

#include <stdio.h>
int main()
{
    int marks;
    scanf("%d", &marks);

    if (marks >= 80)
    {
        printf("A+\n");
    }
    else if (marks < 80 && marks >= 70)
    {
        printf("A\n");
    }
    else if (marks < 70 && marks >= 60)
    {
        printf("A-\n");
    }
    else if (marks < 60 && marks >= 50)
    {
        printf("B\n");
    }
    else if (marks < 50 && marks >= 40)
    {
        printf("C\n");
    }
    else
    {
        printf("F\n");
    }
}