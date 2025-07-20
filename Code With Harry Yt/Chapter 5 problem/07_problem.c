#include <stdio.h>

int main() {
    // code here
    int n = 3;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2*i+1; j++)
        {
            /* code */
            printf("*");
        }
        printf("\n");
    }
    return 0;
}