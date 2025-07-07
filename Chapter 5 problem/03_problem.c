#include <stdio.h>

float force(float mass)
{
    return mass * 9.8;
}
int main()
{
    // code here
    float m = 45;
    printf("the value of force is %f\n", force(m));
    return 0;
}