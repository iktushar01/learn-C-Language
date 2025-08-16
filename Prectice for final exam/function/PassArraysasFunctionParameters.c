#include <stdio.h>

void myFunction(int myNumber[5]){
    for (int i = 0; i < 5; i++) {
        printf("%d\n", myNumber[i]);
    }
}
int main() {
    // code here
    int myNumber[5] = {10, 20, 30, 40, 50};
    myFunction(myNumber);
    return 0;
}