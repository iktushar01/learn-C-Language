#include <stdio.h>

int sum(int a, int b)
{
    int c = a + b;
    int* prt = &c;
    printf("The Sum is %d\n", c);
    return prt;
}
float* average(int a, int b)
{
    float c = (a + b) / 2.0;
    float* prt = &average;
    printf("The Sum is %f\n", c);
    return prt;
}

int main()
{
    // code here
    int x = 4;
    int y = 6;

    int* prt1;
    float* prt2;

 prt1 =   sum(x, y);
  prt2 =  average(x, y);

    printf("The address of sum is %u and of avg is %u", prt1, prt2);
    return 0;
}