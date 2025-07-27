#include <stdio.h>

int main()
{
    // code here
    int marks[] = {23, 34, 67, 345};
    // int* pointer = &marks[0];
    int *pointer = marks; // same as this int* pointer = &marks[0];

    for (int i = 0; i < 4; i++)
    {
        printf("The marks at index %d is %d\n", i, marks[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("The marks at index %d is %d\n", i, marks[i]);
        printf("The marks at index %d is %d\n", i, *pointer);
    }
    return 0;
}