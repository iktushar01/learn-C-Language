#include <stdio.h>

int main()
{

// pointer arithmetic using integer pointer
    // int a = 5;
    // int *pointer = &a;
    // printf("The address of a is %u\n", &a);
    // printf("The address of a is %u\n", pointer++);
    // printf("The value of pointer is %u\n", pointer);


// pointer arithmetic using character pointer
    char a = 'A';
    char *pointer = &a;
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", pointer++);
    printf("The value of pointer is %u\n", pointer);
    return 0;
}