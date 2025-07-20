#include <stdio.h>

int sum_natural(int n){
    if(n == 1){
        return 1;
    }
    return sum_natural(n -1) +n;
}

int main() {
    // code here
    int n = 5;
    printf("the sum of first 5 natural numbers is %d", sum_natural(n));
    return 0;
}