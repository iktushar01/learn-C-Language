#include <stdio.h>

int main() {
    // code here
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);

    while (num > 0)
    {
        /* code */
        int lastDigit = num%10;
        printf("%d\n",lastDigit);
        num= num/10;
    }
    
    return 0;
}