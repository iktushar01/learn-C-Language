#include <stdio.h>

int fibonacci (int n){
    if (n == 1 || n == 2){
        /* code */
        return n-1;
    }
    
    return fibonacci(n-1) + fibonacci(n-2);
}
int main() {
    // code here
    int n = 7;
    printf("The value of fibonacci series at %d is %d", n , fibonacci(n));
    return 0;
}