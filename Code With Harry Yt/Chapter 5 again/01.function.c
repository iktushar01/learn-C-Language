#include <stdio.h>

int sum (int, int);

int sum(int x, int y){
    printf("The Sum is %d\n", x + y);
}

int main() {
    // code here
    int a = 1;
    int b = 2;
    int c = 5;
    sum(a,b);
    sum(a,c);
    return 0;
}