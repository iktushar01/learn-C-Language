#include <stdio.h>

int main() {
    int n = 5;
    int i = 1;
    while(i <= n){
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}
