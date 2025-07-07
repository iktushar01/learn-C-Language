#include <stdio.h>
float average (int a, int b, int c){
    return (a+b+c)/3.0;
}
int main() {
    // code here
    int a = 4, b = 6, c = 5;
    printf("the avg of a , b, c is %f", average(a, b, c));
    return 0;
}