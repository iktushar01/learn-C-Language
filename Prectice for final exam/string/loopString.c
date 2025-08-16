#include <stdio.h>

int main() {
    // code here
    char carName[] = "volvo";
    int length = sizeof(carName) / sizeof(carName[0]);
    int i;
    for(i = 0; i < length; ++i) {
        printf("%c\n", carName[i]);
    }
    return 0;
}