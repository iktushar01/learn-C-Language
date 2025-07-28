#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *pointer = a;

    printf("the value at address %u is %d", pointer + 3, *(pointer + 3));
    return 0;
}