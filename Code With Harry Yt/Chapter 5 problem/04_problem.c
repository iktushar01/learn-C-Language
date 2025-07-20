#include <stdio.h>

// fibnacchi(n) = fibnacchi(n-1) + fibnacchi(n-2);
int fibnacchi(int n){
    if (n == 1 || n == 2)
    {
        /* code */
        return n-1;
    }
    return fibnacchi(n-1) + fibnacchi(n-2);
}

int main() {
    // code here
    int a = 4;
    printf("the value of fibonachhi series at %d is %d", a , fibnacchi(a));
    return 0;
}