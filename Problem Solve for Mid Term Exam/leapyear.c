// leap year

#include <stdio.h>

int main() {

    int year;
    scanf("%d", &year);
    if (year % 400 == 0)
    {
        printf("its leap year");
    }
    else if (year % 100 == 0){
        printf("its leap year");
    }
    else if (year % 4 == 0){
        printf("its leap year");
    }
    else{
        printf("its not leap year");
    }
    return 0;
}