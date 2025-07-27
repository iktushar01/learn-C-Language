#include <stdio.h>

float average (int a, int b, int c){
    return (a + b +c)/3.0;
}

int main() {
    // code here
    int a = 3, b = 6, c = 7;
    printf("The avetage of a, b and c is %f", average(a,b,c));
    return 0;
}