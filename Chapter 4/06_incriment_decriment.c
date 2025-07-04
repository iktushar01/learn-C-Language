#include <stdio.h>

int main()
{
    int i = 5;
    printf("the value of i is %d\n", i);
    i = i + 5;
    printf("the value of i is %d\n", i);
    printf("the value of i is %d\n", i++);
    printf("the value of i is %d\n", i);

    // i++ => post-increment: uses the value, then increases
    // ++i => pre-increment: increases the value, then uses

    return 0;
}