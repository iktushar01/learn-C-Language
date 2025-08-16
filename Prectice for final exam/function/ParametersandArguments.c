#include <stdio.h>

void myFunction(char name[]){
    printf("Hello %s\n", name);
}

int main() {
    // code here
    myFunction("Lian");
    myFunction("Jenny");
    myFunction("Anja");
    return 0;
}