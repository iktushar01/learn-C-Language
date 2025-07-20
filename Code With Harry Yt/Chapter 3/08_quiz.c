#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your number ");
    scanf("%d", &marks);
    if (marks <= 100 && marks >= 81)
    {
        printf("you got A+");
    }
    else if (marks <= 80 && marks >= 71)
    {
        printf("you got A");
    }
    else if (marks <= 70 && marks >= 61)
    {
        printf("you got A-");
    }
    else if (marks <= 60 && marks >= 51)
    {
        printf("you got B");
    }
    else
    {
        printf("you are fail");
    }
    
    return 0;
}