#include <stdio.h>

int main() {
    // code here
    int i = 72;
    int* j= &i; //j is a pointer pointing to i
    printf("The address of i is %d\n", *(&i) );
    // printf("The address of i is %p\n",j );
    return 0;
}