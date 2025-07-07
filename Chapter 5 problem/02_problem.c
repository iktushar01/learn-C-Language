#include <stdio.h>

float c2f(float c){
    return ((9*c)/5) + 32;
}

int main() {
    // code here
    float c = 40;
    printf("Celsius to Fahrenheight for %.0f is %.2f",c, c2f(c));
    return 0;
}