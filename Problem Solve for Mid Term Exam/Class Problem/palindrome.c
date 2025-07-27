#include <stdio.h>

int main() {
    // code here
    int n;
    scanf("%d", &n);

    int temp = n;
    int reverse = 0;

    int digits[10];
    int i = 0;

    while (n  > 0)
    {
        /* code */
        int digit = n % 10;
        reverse = reverse * 10 + digit
    }
    
    return 0;
}