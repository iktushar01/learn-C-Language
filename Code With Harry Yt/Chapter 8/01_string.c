#include <stdio.h>

int main()
{
    // code here
    char st[] = {'a', 'b', 'c','\0'};
    for (int i = 0; i < 3; i++)
    {
        printf("First Character is %c \n", st[i]);
    }

    return 0;
}