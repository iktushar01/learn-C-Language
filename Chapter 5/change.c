#include <stdio.h>

// int sum(int x, int y)
// {
//     return x + y;
// }

int change(int a)
{
    a = 77;
    return 0;
}
int main()
{
    // code here
    // int c = sum(1, 3);
    // printf("%d\n", c);

    int b = 22;
    change(b);
    printf("b is %d", b);
    return 0;
}