#include <stdio.h>

int main() {
    int a = 3;
    int b = 6;
    int c = 9;

    printf("The value is %d\n", a*b/c + 7);
    printf("The value is %d\n", 3*a*b/c + 7*a);
    return 0;
}