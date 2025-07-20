#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("Enter value of  a: \n");
    scanf("%d", &a);
    printf("Enter value of  b: \n");
    scanf("%d", &b);
    printf("Enter value of  c: \n");
    scanf("%d", &c);
    printf("Enter value of  d: \n");
    scanf("%d", &d);

    if (a>b && a>c && a>d)
    {
        printf("the greatest of all is %d", a);
    }
    else if ( b> a && b>c && b>d){
        printf("the greatest of all is %d", b);
    }
    else if ( c> a && c>b && c>d){
        printf("the greatest of all is %d", c);
    }
    else if ( d> a && d>b && d>c){
        printf("the greatest of all is %d", d);
    }
    
    return 0;
}