#include <stdio.h>

int factorial(int n)
{
    if (n == 1 || n == 0) //base condition
    {
        return 1;
    }
    return factorial(n - 1) * n;
}

int main()
{
    // code here
    int a = 3;
    printf("The factorial of %d is %d", a, factorial(a));
    return 0;
}