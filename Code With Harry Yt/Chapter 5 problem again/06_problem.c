#include <stdio.h>

int sum_natural (int n){
    if (n == 1)
    {
        /* code */
        return 1;
    }
    
    return sum_natural(n-1) + n;
}

int main() {
    // code here
    int n = 9;
    printf("The sum of 1st %d natural numbers is %d",n, sum_natural(n));
    return 0;
}