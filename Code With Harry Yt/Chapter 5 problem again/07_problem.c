#include <stdio.h>

int main() {
    // code here
    int n = 23;
    for (int i = 0; i< n; i++){
        //This Loop runs from 0 to 2
        for(int j = 0; j < 2*i+1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}