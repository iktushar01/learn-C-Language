#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    // code here
    int x = 1;
    int y = 3;
    printf("sum: %d + %d = %d", x, y, sum(x, y));
    return 0;
}