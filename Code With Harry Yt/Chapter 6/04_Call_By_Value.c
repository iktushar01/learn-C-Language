#include <stdio.h>

int sum(int* a, int* b)
{
    *a = 6;
    return (*a + *b);
}

int main()
{
    // code here
    int x = 1;
    int y = 3;
    printf("sum: %d + %d = %d\n", x, y, sum(&x, &y));
    printf("The value of x is %d", x);
    return 0;
}