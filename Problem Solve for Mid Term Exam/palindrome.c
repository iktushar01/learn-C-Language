#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int temp = n;
    int reverse = 0;

    while(n > 0){
        int digit = n % 10;
        n = n/10;
        printf("%d\n", digit);
    }
    return 0;
}