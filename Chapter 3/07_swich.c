#include <stdio.h>

int main()
{
    int a;
    printf("Enter a: ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("you Entered 1");
        break;
    case 2:
        printf("you Entered 2");
        break;
    case 3:
        printf("you Entered 3");
        break;
    case 4:
        printf("you Entered 4");
        break;
    default:
        printf("nothing match");
        break;
    }
    return 0;
}