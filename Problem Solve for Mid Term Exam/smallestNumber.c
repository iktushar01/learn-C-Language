// Find the smallest number between three numbers using if-else.

#include <stdio.h>

int main()
{
    // code here
    int a, b, c;
    scanf("%d %d %d",&a,&b,&c);
    if (a <= b && a <= c)
    {
        printf("a smallest number");
    }

    else if (b <= c && b <= a){
         printf("b smallest number");
    }

    else {
        printf("c smallest number");
    }
    
     return 0;
}