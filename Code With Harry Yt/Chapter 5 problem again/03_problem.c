#include <stdio.h>

float force(float mass){
    return mass*9.8;
}

int main() {
    // code here
    int m = 45;
    printf("The value of force is %.2f\n", force(m));
    return 0;
}