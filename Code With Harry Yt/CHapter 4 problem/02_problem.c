#include <stdio.h>

int main() {
    int n = 10;
    printf("value of n\n");
    scanf("%d",&n);
    for (int i = 10; i > 0; i--)
    {
        printf("%d X %d = %d\n", n , i, n*i);
    }
    
    return 0;
}