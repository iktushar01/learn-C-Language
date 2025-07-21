// Find out if a number is even or odd using switch statement.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter a num");
    scanf("%d", &n);
    int rem = n % 2;
    switch (rem)
    {
    case 1:
        printf("ODD\n");
        break;
    default:
        printf("EVEN\n");
    }
}