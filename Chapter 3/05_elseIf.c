#include <stdio.h>

int main()
{

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age > 60)
    {
        printf("you can drive and you are a senior citizen");
    }
    else if (age > 18)
    {
        printf("you can drive");
    }
    else{
        printf("you cannot drive");
    }

    return 0;
}