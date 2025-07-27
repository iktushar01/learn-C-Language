#include <stdio.h>

int change_To_thirty_Times(int* a){
    *a = *a * 10;
}

int main() {
    // code here
    int x = 45;
    printf("The value of x is %d\n", x);
    change_To_thirty_Times(&x);
    printf("The value of x is %d\n", x);

    return 0;
}